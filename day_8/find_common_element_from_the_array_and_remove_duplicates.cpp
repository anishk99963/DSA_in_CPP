#include<iostream>
#include<vector>
using namespace std;

// Function to remove duplicates from a vector
void removeDuplicates(vector<int>& arr) {
    if (arr.empty()) {
        return;  // Nothing to remove if the vector is empty
    }

    int i = 0;
    for (int j = 1; j < arr.size(); j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    arr.resize(i + 1);
}

int main() {
    vector<int> arr1{2,3,3,4};
    vector<int> arr2{2,2,3,3,4};
    vector<int> arr3{2,3,3,4};
    vector<int> ans;

    // Remove duplicates from the arrays
    removeDuplicates(arr1);
    removeDuplicates(arr2);
    removeDuplicates(arr3);

    int n1 = arr1.size();
    int n2 = arr2.size();
    int n3 = arr3.size();

    int i, j, k;
    j = k = i = 0;

    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            ans.push_back(arr1[i]);
            if (i < n1 - 1 && j < n2 - 1 && k < n3 - 1) {
                i++;
                j++;
                k++;
            } else {
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

    for (auto val : ans) {
        cout << val << " ";
    }

    return 0;
}
