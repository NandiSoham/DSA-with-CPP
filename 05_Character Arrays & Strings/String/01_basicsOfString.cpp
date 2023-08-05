#include <iostream>
#include <string.h>
using namespace std;

int main(){
    ///create string
    string str;
    //take input
    cin >> str;
    //print
    cout << str << endl;
    // checking length using '.length()' function
    cout << "length: " << str.length() << endl;
    // checking if string is empty or not using '.empty()' function
    cout << "is empty: " << str.empty() << endl;
    //add character using 'push_back()'
    str.push_back('N');
    cout<< str << endl;
    //remove or take out character using 'pop_back()'
    str.pop_back();
    cout << str << endl;
    //returning substring using'.substr()'
    cout << str.substr(0,6) << endl;

    //.compare() function
    string a = "code";
    string b = "coder";
    if(a.compare(b) == 0){
        cout<<"exactly same string"<<endl;
    } else{
        cout <<"not exactly the same "<<endl;
    }

    //.find() function
    string sentence = "hello, how're you doing?";
    string target =  "harry";
    cout << sentence.find(target) << endl;
    if(sentence.find(target) == std::string::npos){
        cout << "no such word in this sentence" << endl;
    }

    //.replace() function
    string s1 = "this is my first string";
    string word1 = "second";
    s1.replace(11, 5, word1);
    cout <<s1 << endl;

    //.erase() function
    string mainString = "I do not want to eat ramen";
    mainString.erase(1,7);
    cout <<mainString << endl;

    return 0;
}