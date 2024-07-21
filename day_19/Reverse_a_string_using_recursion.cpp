#include<iostream>
#include<string>
using namespace std;

string reverseString(string s, int st, int ed){
    if(st >= ed){
        return s;
    }
    char temp;
    temp = s[st];
    s[st] = s[ed];
    s[ed] = temp;
    return reverseString(s,++st,--ed);
}

int main() {
    string s = "Anish";
    int st = 0;
    int ed = s.length()-1;
    string ans = reverseString(s,st,ed);
    cout<<ans;
}