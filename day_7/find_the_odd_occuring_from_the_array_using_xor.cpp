#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> arr{1,1,2,2,3,3,600,5,5,4,4,8,8};
    
    int ans = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    cout<<"the odd value is: "<<ans;
}