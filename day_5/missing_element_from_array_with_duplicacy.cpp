#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr {1,3,5,3,3,4,7};

    for(int i = 0; i < arr.size(); i++) {
        
            int index = std::abs(arr[i])-1;
            
            if (arr[index] > 0) {
                arr[index] = -arr[index];
            }
        
    }

    for( int i = 0; i < arr.size();i++) {
        if (arr[i] > 0) {
            cout<<"missing values are: "<<i+1<<endl;
        }
    }
}