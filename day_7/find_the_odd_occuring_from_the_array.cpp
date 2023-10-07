#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> arr{1,1,2,2,3,3,600,5,5,4,4,8,8};
    
    int st = 0;
    int ed = arr.size()-1;
    int mid = st + (ed - st) / 2;

    while ( ed > st) {
        if(mid%2==0) {
            if (arr[mid] == arr[mid+1]) {
                st = mid + 2;
            }
            else {
                ed = mid;
            }
        }
        else {
            if (arr[mid] == arr[mid-1]) {
                st = mid +1;
            }
            else {
                ed = mid-1;
            }
        }
        mid = st + (ed - st) / 2;
    }
    cout<<"odd occurence index is: "<<mid<<endl;
    cout<<"odd occurence number is: "<<arr[mid];
}