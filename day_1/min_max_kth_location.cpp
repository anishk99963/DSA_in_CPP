#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector <int> arr{12,30,5,10,60,12,14,36};

    int k = 3;
    int n = 8;

    sort(arr.begin(), arr.end());
    cout<<" Kth smallest: "<<arr[k-1]<<endl;
    cout<<" Kth largest: "<<arr[n-k]<<endl;

}