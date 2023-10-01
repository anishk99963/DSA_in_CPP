#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr {1,5,8,10};

    int k=3;
    int min, max;
    int n = arr.size();
    int dif = arr[n-1] - arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i]-k < 0)
        continue;

        min =  std::min(arr[0]+k, arr[i]-k);
        max =  std::max(arr[i-1]+k, arr[n-1]-k);

        dif =  std::min(dif , max-min);
    }

    cout<<"minimum height "<<dif;
}