#include <bits/stdc++.h>
#include <vector>
using namespace std;

// important kadane algorithm

int main() {
    vector <int> arr {1,2,3,-2,5};

    int cur_sum = 0;
    int max_sum = arr[0];

    for(int i=0; i < arr.size(); i++) {
        cur_sum = cur_sum + arr[i];

        if (cur_sum > max_sum ) {
            max_sum = cur_sum;
        }

        if (cur_sum < 0) {
            cur_sum = 0;
        }
    }


    cout<<"max sum will be"<<endl;
    cout<<max_sum<<endl;
}