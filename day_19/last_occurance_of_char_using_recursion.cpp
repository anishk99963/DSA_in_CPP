#include<iostream>
#include<string>
using namespace std;

int lastOccurance(string s, char x, int l){
    int occurance = -1;
    if(s[l] == x){
        occurance = l;
        return occurance;
    }
    if(s[l] <= 0){
        return occurance;
    }
    occurance = lastOccurance(s,x,l-1);
    
    cout<<"the answer is "<<occurance;
    return occurance;
}

int main(){
    string s;
    cout<<"enter the string";
    cin>>s;
    char x;
    cout<<"enter the char value to find";
    cin>>x;
    int l = s.length();
    int ans = lastOccurance(s,x,l-1);
    cout<<"the answer is "<<ans;
}