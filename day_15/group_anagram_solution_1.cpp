#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
        vector<string> ga = {"eat","tea","tan","ate","nat","bat"};
        map<string, vector<string>>mp;

        for(auto str : ga ){
            string s = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto i = mp.begin(); i != mp.end(); i++) {
            ans.push_back(i->second);
        }
        for (auto group : ans) {
            for (auto str : group) {
                cout << str << " ";
            }
            cout << endl;
        }
    }
