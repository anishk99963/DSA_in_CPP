#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string str, int st, int ed) {
    while (ed >= st) {
        if (str[st] == str[ed]) {
            
            ed--;
            st++;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    string str = "abcba";

    int st = 0;
    int ed = str.length()-1;
    bool ans = 0;

    while (ed > st) {
        if (str[st] != str[ed]) {
            ans = checkPalindrome(str,st+1,ed) || checkPalindrome(str,st,ed-1);
            break;
        }
        else {
            st++;
            ed--;
        }
    }
    cout<<"the answer is: "<<ans;
}