#include<iostream>
// #include<vector>
using namespace std;

int main() {
    // vector<vector<int>> arr
    // { 
    //     {1, 2, 3}, 
    //     {4, 5, 6}, 
    //     {7, 8, 9},
    //     {10,11,12}
    // }; 
    int arr[4][3] = {{1, 2, 3}, 
                    {4, 5, 6}, 
                    {7, 8, 9}, 
                    {10,11,12}};

    int row = 4;
    int col = 3;
    int st = 0;
    int ed = (row*col) - 1;
    int mid = (st + ed) / 2;
    int colIndex = 0;
    int rowIndex = 0;
    int target = 5;
    bool flag = 0;

    while (ed >= st) {
        rowIndex = mid/col;
        colIndex = mid%col;

        if (arr[rowIndex][colIndex] == target) {
            cout<<"found at row["<<rowIndex<<"] col ["<<colIndex<<"]";
            flag = 1;
            break;
        }
        else if (arr[rowIndex][colIndex] < target) {
            st = mid + 1;
        }
        else if (arr[rowIndex][colIndex] > target) {
            ed = mid - 1;
        }
        mid = (st + ed) / 2;
    }
    if (flag = 0){
         cout<<"number not found!";
    }
       
}