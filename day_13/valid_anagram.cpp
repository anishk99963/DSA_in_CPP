#include<iostream>
#include<string>
using namespace std;

int main() {
    int freqTable[256] = {0};
    string s1 = "anagram";
    string s2 = "nagaram";
    int flag = 0;

    for (int i = 0; i < s1.length(); i++) {
        freqTable[s1[i]]++;
    }

    for (int j = 0; j < s2.length(); j++) {
        freqTable[s2[j]]--;
    }

    for(auto i: freqTable)
   {
   		if (freqTable[i] != 0) {
            flag = 0;
            break;
        }
        else {
            flag = 1;
        }
   }

   if (flag == 0) {
    cout<<"not an anagram";
   }
   else {
    cout<<"is an anagram";
   }
}