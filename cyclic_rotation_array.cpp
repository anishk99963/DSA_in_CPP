#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector <int> arr {1,2,3,4,5};

    int n = arr.size() -1;
    int last = arr[n];

    for(int i = n; i >= 0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = last;

    cout<<"array after cyclic rotation"<<endl;
    for(auto val: arr){
        cout<< val << " ";
        }
}