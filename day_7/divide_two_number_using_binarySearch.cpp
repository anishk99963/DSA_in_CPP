#include<iostream>
using namespace std;

int main() {
    int dividend = -10;
    int divisor = -5;
    int quoant = 0;
    int st = 0;
    int ed = abs(dividend);
    int mid = st + (ed - st) / 2;

    while (ed >= st) {
        if (abs(divisor*mid) == abs(dividend)) {
            quoant = mid;
        }
        if (abs(divisor*mid) > abs(dividend)) {
            ed = mid - 1;
        }
        else {
            quoant = mid;
            st = mid + 1;
        }
        mid = st + (ed - st) / 2;
    }
    if(dividend < 0 && divisor > 0) {
        cout<<"quoant is: "<< -quoant;
        
    }
    else if(dividend > 0 && divisor < 0) {
        cout<<"quoant is: "<< -quoant;
        
    }
    else {
        cout<<"quoant is: "<<quoant;
    }
    
}