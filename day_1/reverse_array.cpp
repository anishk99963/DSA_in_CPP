#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr{10,20,30,40,50};

    for(auto val: arr){
        cout<< val << " ";
    }

    int start = 0;
    int end = (sizeof(arr) / sizeof(arr[0]) - 2);
    // int end = sizeof(arr);
    

    while(end >= start) {
             swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(auto val: arr){
        cout<< val << " ";
    }
}