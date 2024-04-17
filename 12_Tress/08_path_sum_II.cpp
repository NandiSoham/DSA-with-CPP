#include <iostream>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    void solve(Node* root, int targetSum, int curSum, vector<int> path, vector<vector<int>>& ans){
        if(!root) return;

        curSum += root->data;
        path.push_back(root->data);

        if(!root->left && !root->right && curSum == targetSum) {
            ans.push_back(path);
            return;
        }

        solve(root->left, targetSum, curSum, path, ans);
        solve(root->right, targetSum, curSum, path, ans);
    }

    vector<vector<int>> pathSum(Node* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        int curSum = 0;

        solve(root, targetSum, curSum, path, ans);
        return ans;
    }
};

int main() {
    // Create a binary tree
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(11);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(2);
    root->right->left = new Node(13);
    root->right->right = new Node(4);
    root->right->right->left = new Node(5);
    root->right->right->right = new Node(1);

    Solution sol;
    vector<vector<int>> result = sol.pathSum(root, 22);

    cout << "Output:" << endl;
    for (const auto& path : result) {
        cout << "[";
        for (const auto& val : path) {
            cout << val << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}