#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> arr1{1,5,10,20,40,80};
    vector <int> arr2{6,7,20,80,100};
    vector <int> arr3{3,4,15,20,30,70,80,120};
    vector <int> ans;

    int n1 = 6;
    int n2 = 5;
    int n3 = 8;

    int i,j,k;
    j=k=i=0;

    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            ans.push_back(arr1[i]);
            if (i < n1-1 && j < n2-1 && k < n3-1) {
                i++;
                j++;
                k++;
            }
            else {
                break;
            }
        }
        if (arr1[i] < arr2[j]) {
            i++;
        }
        if (arr2[j] < arr3[k]) {
            j++;
        }
        if (arr3[k] < arr1[i]) {
            k++;
        }
    }

    for(auto val: ans){
        cout<< val << " ";
        }
}