#include<iostream>
using namespace std;

bool print_array(int arr[], int l, int st = 0){
    if (st >= l){
        return false;
    }
    for(int i = 0; i <=st;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    ++st;
    return print_array(arr,l,st);
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int l = sizeof(arr) / sizeof(arr[0]);
    print_array(arr,l,0);
}