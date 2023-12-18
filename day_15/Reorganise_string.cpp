#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    string s = "aab";
    int flag = 0;
    
    int hash[26] = {0};

    for (int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    char max_char;
    int max_freq = 0;

    for(int i=0; i<26; i++) {
        if(hash[i] > max_freq) {
            max_freq = hash[i];
            max_char = i + 'a';
        }
    }

    int index = 0;

    while(max_freq > 0 && index < s.size()){
        s[index] = max_char;
        max_freq--;
        index +=2;
    }

    if(max_freq !=0) {
        flag = 1;
    }

    hash[max_char - 'a'] = 0;

    for(int i=0; i<26; i++){
        while(hash[i] > 0){
            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index +=2;
        }
    }    
    
    if(flag == 0) {
        cout<<"the final output is "<<s;
    }
    else {
        cout<<"false";
    }
}