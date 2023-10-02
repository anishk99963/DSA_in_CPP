#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr1 {1,3,5,7};
    vector <int> arr2 {0,2,6,8,9};

    int n = arr1.size();
    int m = arr2.size();

    int i=0;
    int j=0;

    while (i < n) {
        if (arr1[i] > arr2[j]) {
            int temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
        }
        i++;
        
        for (int k = 1; k < m; k++) {
            if (arr2[k] < arr2[k-1]) {
                int temp = arr2[k];
                arr2[k] = arr2[k-1];
                arr2[k-1] = temp;
            }
        }
    }
    cout<<"After merging the array's "<<endl;
    for(auto val: arr1){
        cout<< val << " ";
        }
        cout<<endl;
        for(auto val: arr2){
        cout<< val << " ";
        }
}