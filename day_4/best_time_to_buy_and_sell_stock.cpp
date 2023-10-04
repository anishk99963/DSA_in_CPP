#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr {3,1,4,8,7,2,5};

    int min = arr[0];
    int max_profit = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        max_profit = std::max(max_profit,arr[i] - min);
    }
    cout<<"maximum profit will be: "<<max_profit;
}