#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> minites;
    vector<string> input{"12:10","10:15","00:00","17:20","18:00","19:47","23:59"};

    // convert into minites
    for (int i = 0; i < input.size(); i++) {
        string current = input[i];

        int hour = stoi( current.substr(0,2));
        int min = stoi( current.substr(3,2));
        int totalMin = (hour * 60) + min;

        minites.push_back(totalMin);
    }

    // sorting
    sort(minites.begin(),minites.end());

    // calculating min difference
    int mini = 1445 ;
    int n = minites.size();
    int difference;

    for(int i=0; i < n-1; i++) {
        difference = minites[i+1] - minites[i];
        mini = min(mini, difference);
    }

    difference = (minites[0]+1440) - minites[n-1];
    mini = min(mini, difference);
    
    cout<<"the minimum difference is: "<<mini;
}