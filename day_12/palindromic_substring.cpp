#include <iostream>
#include <string>
using namespace std;

int expandAroundIndex(string sample, int l, int r) {
    int count = 0;

    while (l >= 0 && r < sample.length() && sample[l] == sample[r]) {
        count++;
        l--;
        r++;
    }
    return count;
}

int main() {
    string sam = "abc";

    int count = 0;
    int n = sam.length();

    for (int center = 0; count < n; center++) {
        // odd
        int oddAns = expandAroundIndex(sam, center, center);
        count = count + oddAns;
        // even
        int evenAns = expandAroundIndex(sam, center, center + 1);
        count = count + evenAns;
    }
    cout << "total count is: " << count << endl;
    
    return 0; // Added return statement to indicate successful program completion
}
