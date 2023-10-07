#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> arr{10,3,40,20,50,80,70};

    int st = 0;
    int ed = arr.size()-1;
    int mid = (st + ed) / 2;
    int target = 10;
    int res = 0;

    while (ed >= st) {
        if (arr[mid] == target ) {
            res = mid;
            break;
        }
        if (mid-1 >= st && arr[mid+1] == target) {
            res = mid+1;
            break;
        }
        if (mid+1 <= ed && arr[mid-1] == target) {
            res = mid-1;
            break;
        }
        if (arr[mid] > target) {
            ed = mid-2;
        }
        else {
            st = mid + 2;
        }
        mid = (st + ed) /2;
    }
    cout<<"found at "<<res<<" index";
}