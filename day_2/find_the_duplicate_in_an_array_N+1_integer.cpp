#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr {2,3,2,3,2,2};

    for(int i = 0; i < arr.size(); i++) {
        int index = std::abs(arr[i]);

        if (arr[index] < 0) {
            cout<< index<<endl;
        }

        else{
            arr[index] = - arr[index];
        }
    }
}