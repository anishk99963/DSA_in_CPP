#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    string s = "12";
    string t = "\u0067\u0067";
    bool flag = 1;

    int hash[256] = {0};
    bool isTString[256] = {0};

    for (int i = 0; i < s.size(); i++) {
        if (hash[s[i]] == 0 && isTString[t[i]] == 0) {
            hash[s[i]] = t[i];
            isTString[t[i]] = true;
        }
    }

    for (int j = 0; j < s.size(); j++) {
        if (char(hash[s[j]]) != t[j]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        cout<<"is the isomorphic";
    }
    else {
        cout<<"not an isomorphic";
    }

    
}