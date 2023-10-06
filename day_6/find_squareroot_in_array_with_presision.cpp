#include<iostream>
#include<vector>
using namespace std;

int main() {
    int sqr = 29;
    int st = 0;
    int ed = 16;
    int mid = (st + ed) / 2;
    int res = 0;

    while (ed >= st) {
        if (mid*mid == sqr) {
            res = mid;
            break;
        }
        else if (mid*mid < sqr) {
            res = mid;
            st = mid + 1;
        }
        else if (mid*mid > sqr) {
            ed = mid - 1;
        }
        mid = (st + ed) / 2;
    }

    // if (res > 0) {
    //     cout<<"number found "<<res;
    // }

    // else {
    //     cout<<"number not found";
    // }

    int pre = 6;
    double step = 0.1;
    double ans = res;

    for (int i = 0; i < pre; i++) {
        for (double j = ans; j*j < sqr; j=j+step) {
            ans = j;
        }
        step /= 10;
    }

    cout<<"presision is: "<<ans;
 
}