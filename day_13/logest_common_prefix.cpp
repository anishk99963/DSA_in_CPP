#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string> strs={"flower","flow","flight"};
    string commonAns;
    int i = 0;

    while(true) {
        char compare = 0;

    for (auto str : strs) {
        if (i >= str.size()) {
            compare = 0;
            break;
        }

        if (compare == 0) {
            compare = str[i];
        }
        else if (str[i] != compare) {
            compare = 0;
            break;
        }
    }
    if (compare == 0) {
        break;
    }
    commonAns.push_back(compare);
    i++;

    }

    cout<<"the longest common prefix is: "<<commonAns;
}