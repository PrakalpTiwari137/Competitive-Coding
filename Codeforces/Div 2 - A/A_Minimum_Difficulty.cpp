#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec;

    for(int i=0; i<n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    int diff = INT_MIN;
    int diff2 = INT_MAX;
    for(int i=0; i<n-1; i++) {
        if(vec[i+1]-vec[i] > diff) {
            diff = vec[i+1]-vec[i];
        }
        if(i < n-2) {
            if(vec[i+2]-vec[i] < diff2) {
                diff2 = vec[i+2]-vec[i];
            }
        }
    }
    cout << max(diff, diff2);
}    