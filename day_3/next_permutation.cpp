#include<iostream>
#include<vector>
using namespace std;

void reverseVector(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr{2, 1,3};
    int n = arr.size();
    int ind = -1;

    // Find the largest index 'ind' such that arr[ind] < arr[ind+1]
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }

    if (ind == -1) {
        // If 'ind' is still -1, the array is in descending order,
        // so we reverse it to get the smallest permutation.
        reverseVector(arr, 0, n - 1);
    } else {
        // Find the smallest element in the right part of the array
        // that is greater than arr[ind].
        int smallestGreater = -1;
        for (int i = n - 1; i > ind; i--) {
            if (arr[i] > arr[ind]) {
                smallestGreater = i;
                break;
            }
        }

        // Swap arr[ind] and arr[smallestGreater]
        swap(arr[ind], arr[smallestGreater]);

        // Reverse the right part of the array to get the next permutation.
        reverseVector(arr, ind + 1, n - 1);
    }

    // Print the next permutation
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
