#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector <int> arr1 {1, 3, 3, 4, 5, 7};
    vector <int> arr2 {2, 3, 3,5, 6};
    vector <int> ans;

    for(int i = 0; i < arr1.size(); i++) {
        for(int j = 0; j < arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                arr2[j] = -1;
                ans.push_back(arr1[i]);
            }
        }
    }       
    cout<<"intersection array is "<<endl;
    for(auto val: ans){
        cout<< val << " ";
        }
}