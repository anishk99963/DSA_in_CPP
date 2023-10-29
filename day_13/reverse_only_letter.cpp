#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    string s = "a-bC-dEf-ghIj";
    int st = 0;
    int ed = s.length();

    while ( ed >= st) {
        if (s[st] > 'a' && s[st] < 'z' || s[st] > 'A' && s[st] < 'Z') {
            if  (s[ed] > 'a' && s[ed] < 'z' || s[ed] > 'A' && s[ed] < 'Z') {
                swap(s[st], s[ed]);
                st++;
                ed--;
            }
            else{
                ed--;
            }
        }
        else {
            st++;
        }
    }

    cout<<"the result is: "<<s;
}
