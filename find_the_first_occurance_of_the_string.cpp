#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    string m1 = "sadbutsad";
    string m2 = "sad";

    int n1 = m1.size();
    int n2 = m2.size();

    for(int i=0; i<=n1-n2; i++){
        for(int j=0; j<=n2;j++){
            if (m2[j] != m1[i+j]){
                break;
            }
            if(j == n2-1) {
                cout<<i;
            }
        }
    }
    cout<<"false";
}