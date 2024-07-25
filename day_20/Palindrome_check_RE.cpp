#include<iostream>
#include<string>
using namespace std;

bool palindrome_c (string s, int st, int ed){
   

    if (st >= ed) {
        // cout<<"st = "<<st<<" ed = "<<ed;
        return true;
    }
    if(s[st] != s[ed]){
        return false;
    }
    else {
        return palindrome_c(s, st + 1, ed - 1);
    }   
    
}

int main(){
    string s = "rotator";
    int l = s.length()-1;
    int st = 0;
    int ed = l;
    bool ans = palindrome_c(s,st,ed);
    cout<<"the answer is "<<ans;
    return ans;
}