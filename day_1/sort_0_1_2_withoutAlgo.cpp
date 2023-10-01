#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    // vector <int> arr{0,2,1,2,0,1,2,0,0,1,2,1,0};
    vector <int> arr{1,1,1,2,0,1,2,2,1,0,1,0,2};

    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while(mid <= high) {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
        
        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        }
        
    }
    cout<<"after sorting the array"<<endl;
        for(auto val: arr){
        cout<< val << " ";
        }
}