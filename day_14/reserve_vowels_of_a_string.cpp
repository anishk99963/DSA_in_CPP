// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;


// int main() {
//     string s = "leetcode";
//     int st = 0;
//     int ed = s.length();

//     while ( ed >= st) {
//         if (s[st] == 'a' || s[st] == 'A' || s[st] == 'e' || s[st] == 'E' || s[st] == 'i' || s[st] == 'I' || s[st] == 'o' || s[st] == 'O' || s[st] == 'u' || s[st] == 'U' ) {
//             if  (s[ed] == 'a' || s[ed] == 'A' || s[ed] == 'e' || s[ed] == 'E' || s[ed] == 'i' || s[ed] == 'I' || s[ed] == 'o' || s[ed] == 'O' || s[ed] == 'u' || s[ed] == 'U') {
//                 swap(s[st], s[ed]);
//                 st++;
//                 ed--;
//             }
//             else{
//                 ed--;
//             }
//         }
//         else {
//             st++;
//         }
//     }

//     cout<<"the result is: "<<s;
// }

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    string s = "leetcode";
    int st = 0;
    int ed = s.length();
    string str = "aeiouAEIOU";

    while ( ed >= st) {
        if (st < ed && str.find(s[st]) != string::npos) {
            if  (st < ed && str.find(s[ed]) != string::npos) {
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
