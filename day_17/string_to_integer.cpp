#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s = "   -123hello456";
    int num = 0, i = 0, sign = 1; 

    while (s[i] == ' ') {
        i++;
    }

    if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
        sign = s[i] == '+' ? 1 : -1;
        ++i;
    }

    while (i < s.size() && isdigit(s[i])) {
        
        if (num > -214748364 / 10 || (num == 214748364 / 10 && (s[i] - '0') > 7)) {
             sign == -1 ? -214748364 : 214748364;
        }

        num = num * 10 + (s[i] - '0');
        ++i;
    }
    cout << num * sign << endl;

    return 0;
}
