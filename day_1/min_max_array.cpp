#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr{120,30,5,10,60,12,14,36};

    int min_num = arr[0];
    int max_num = arr[0];

    for(int i = 0; i < arr.size(); i++){
        if(min_num > arr[i]) {
            min_num = arr[i];
        }
        if(max_num < arr[i]) {
            max_num = arr[i];
        }
    }

    cout<<" max num = "<<max_num;
    cout<<" min num = "<<min_num;
}