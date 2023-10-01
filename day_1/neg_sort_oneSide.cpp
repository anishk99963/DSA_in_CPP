#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector <int> arr{-12, 11, -13, -5, 6, -7, 5, -3, -6};

    int start = 0;
    int end = arr.size() - 1;
    while (end >= start) {
        if (arr[start] < 0) {
            start++;
        }
        else {
            swap(arr[start],arr[end]);
        }
        if (arr[end] > 0) {
            end--;
        }
    }
    cout<<"after sorting the array"<<endl;
        for(auto val: arr){
        cout<< val << " ";
        }
}