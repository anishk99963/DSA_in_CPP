#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossible (vector <int> arr,int n,int cow,int mid) {
    int lastPos = arr[0];
    int cowCount = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] - lastPos >= mid) {
            cowCount++;
            
            lastPos = arr[i];
        }
        if(cowCount == cow) {
                return true;
            }
    }
    return false;
}

int main() {
    vector <int> arr{4,2,1,3,5};

    int n = arr.size();
    int st = 0;
    int ed = *std::max_element ( arr.begin() , arr.end() );
    int ans = -1;
    int mid = (st + ed) / 2;
    int cow = 6;

    std::sort(arr.begin(),arr.end());

    while ( ed >= st) {
        if (isPossible(arr,n,cow,mid)) {
            ans = mid;
            st = mid + 1;
        }
        else {
            ed = mid - 1;
        }
        mid = (st + ed) / 2;
    }
    cout<<" the answer is: "<<ans;
}