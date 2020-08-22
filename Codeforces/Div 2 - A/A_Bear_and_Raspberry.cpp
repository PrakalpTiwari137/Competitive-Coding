#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    vector<int> arr;

    int val;
    for(int i=0; i < n; i++) {
        cin >>val;
        arr.push_back(val);
    }

    int diff = INT_MIN;

    for(int i = 0; i < n-1; i++) {
        if(arr[i]-arr[i+1] > diff) {
            diff = arr[i] - arr[i+1];
        }
    }

    if(diff<=0 || diff<=c) {
        cout << "0";
    }
    else {
        cout << diff-c;
    }
}