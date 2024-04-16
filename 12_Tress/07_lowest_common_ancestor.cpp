#include <iostream>
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

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    if (root == NULL)
        return NULL;

    if (root->data == p->data)
        return p;
    if (root->data == q->data)
        return q;

    Node *leftSideAns = lowestCommonAncestor(root->left, p, q);
    Node *rightSideAns = lowestCommonAncestor(root->right, p, q);

    if (leftSideAns == NULL && rightSideAns == NULL)
        return NULL;
    else if (leftSideAns != NULL && rightSideAns == NULL)
        return leftSideAns;
    else if (leftSideAns == NULL && rightSideAns != NULL)
        return rightSideAns;
    else // (leftSideAns != NULL && rightSideAns != NULL)
        return root;
}

int main()
{
    // Create the binary tree nodes
    Node *root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);
    root->right->left = new Node(0);
    root->right->right = new Node(8);

    Node *p = root->left;
    Node *q = root->right;
    Node *lca = lowestCommonAncestor(root, p, q);

    if (lca)
        std::cout << "Lowest Common Ancestor: " << lca->data << std::endl;
    else
        std::cout << "One or both nodes not found in the tree." << std::endl;

    return 0;
}