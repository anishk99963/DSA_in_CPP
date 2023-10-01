#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr {2,3,1,1,4};

    int des = 0;
    int pos = 0;
    int jum = 0;
    int n = arr.size() - 1;

    for (int i = 0; i < n; i++) {
        
        des = std::max(des, arr[i]+i);

        if (pos == i) {
            pos = des;
            jum++;
        }
    }
    cout<<"minmum number of jumps are: "<<jum;
}