#include<iostream>
#include<vector>
using namespace std;

bool isPossible (vector <int> arr,int n,int m,int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int main() {
    vector <int> arr{10,20,30,40};
    
    int st = 0;
    int sum = 0;
    int n = arr.size();
    int m = 2;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int ed = sum;
    int mid = (st + ed) / 2;
    int ans = 0;

    while (ed > st) {
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            ed = mid - 1;
        }
        else {
            st = mid + 1;
        }
        mid = (st + ed) / 2;
    }
    

    cout<<"the answer is: "<<ans;
}