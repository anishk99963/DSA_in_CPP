#include<iostream>
using namespace std;

int main() {
    int arr[3][4] = {
                        {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}
                    };
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i<m; i++) {
        if (i%2==0) {
            for (int j = 0; j<n; j++) {
                cout<<arr[j][i]<<" ";
            }      
        }
        else {
            for (int j = n-1; j >= 0; j--) {
                cout<<arr[j][i]<<" ";
            }
        }
    }
}