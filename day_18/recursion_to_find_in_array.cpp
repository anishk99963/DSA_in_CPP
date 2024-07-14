#include<iostream>
using namespace std;

bool searchInArray(int arr[], int size, int index, int target)
{
    //base case
    if(index == size)
    {
        return false;
    }
    if(arr[index] == target){
        return true;
    }
    //recursion use
    bool ans = searchInArray(arr, size, index+1, target);
    return ans;
}

int main() {
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;
    int target = 70;
    int ans = searchInArray(arr, size, index, target);
    cout<<ans;
    return 0;
}
