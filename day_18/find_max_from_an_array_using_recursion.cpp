#include<iostream>
using namespace std;

int searchInArray(int arr[], int size, int index, int max)
{
    //base case
    if(index == size)
    {
        return max;
    }
    if(arr[index]>max){
        max = arr[index];
    }    
    //recursion use
    searchInArray(arr, size, index+1, max);
}

int main() {
    int arr[] = {10,20,30,80,50,60};
    int size = 6;
    int index = 0;
    int max = arr[0];
    int ans = searchInArray(arr, size, index, max);
    cout<<"the answer is "<<ans;
    return 0;
}
