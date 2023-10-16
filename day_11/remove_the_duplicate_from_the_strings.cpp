
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abbaaat";
    string ans = "";
    
    int i = 0;
    
    while(i < str.length()) {
        if (ans.length() > 0){
            if (ans[ans.length() - 1] == str[i]) {
                ans.pop_back();
            }
            else {
                ans.push_back(str[i]);
            }
        }
        else {
            ans.push_back(str[i]);
        }
        i++;
    }
    cout<<"the output is : "<<ans;
}