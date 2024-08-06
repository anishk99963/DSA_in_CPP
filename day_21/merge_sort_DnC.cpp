#include<iostream>
#include<string>
using namespace std;

void merge(int arr[], int st, int ed, int mid) {
    int leftLength = mid-st+1;
    int rightLength = ed-mid;

    int *leftArr = new int[leftLength];
    int *RightArr = new int[rightLength];

    // fill or copy the left and right array
    //copy original array -> values
    //copying into left array
    for(int i=0; i<leftLength; i++){
        leftArr[i] = arr[st + i];
        // index += 1;
    }

    //copying into right array
    for(int i=0; i<rightLength; i++){
        RightArr[i] = arr[mid + 1 + i];
        // index += 1;
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArr_Index = st;

    while(leftIndex < leftLength && rightIndex < rightLength) {
        if(leftArr[leftIndex] < RightArr[rightIndex]){
            arr[mainArr_Index] = leftArr[leftIndex];
            leftIndex += 1;
            mainArr_Index += 1;
        }
        else {
            arr[mainArr_Index] = RightArr[rightIndex];
            rightIndex += 1;
            mainArr_Index += 1;
        }
    }

    //checking if some of the elements are there in left or right array
    while(leftIndex < leftLength){
        arr[mainArr_Index] = leftArr[leftIndex];
        leftIndex += 1;
        mainArr_Index += 1;
    }
    while(rightIndex < rightLength){
        arr[mainArr_Index] = RightArr[rightIndex];
        rightIndex += 1;
        mainArr_Index += 1;
    }
}

void merge_sort(int arr[],int st, int ed) {
    //base case
    if(st >= ed) {
        return;
    }
    
    int mid = (st+ed)/2;

    //left part recursion se solve
    merge_sort(arr,st,mid);
    //right part recursion se solve
    merge_sort(arr,mid+1,ed);
    //dono ko merge kardo 
    merge(arr,st,ed,mid);

}

int main() {
    int arr[] = {10,80,100,30,90,70,60,20,110,112,50,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    int st = 0;
    int ed = size-1;
    cout<<"before: "<<endl;
    for(int i=0; i < size; i++) {
        cout<< arr[i]<<" ";
    }
    merge_sort(arr,st,ed);

    cout<<endl<<"After: "<<endl;
    for(int i=0; i < size; i++) {
        cout<< arr[i]<<" ";
    }
}