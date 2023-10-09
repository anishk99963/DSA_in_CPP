#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main() {
    vector <int> arr{1,1,1,1,1};
    set <pair<int,int>> ans;

    sort(arr.begin(),arr.end());

    int i = 0;
    int j = 1;
    int k = 0;

    while (j < arr.size()) {
        int diff = arr[j] - arr[i];
        if (diff == k) {
            ans.insert({arr[i],arr[j]});
            i++;
            j++;
        }
        else if (diff > k) {
            i++;
        }
        else {
            j++;
        }
        if(i == j) {
            j++;
        }
    }
    cout<<ans.size()<<endl;
     for (auto var : ans) {
      cout << "(" << var.first << ", "<< var.second << ")"<<endl;
   }
}