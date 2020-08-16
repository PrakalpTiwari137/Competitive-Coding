#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int small = INT_MAX, large = INT_MIN;
    int start, end, val;
    bool flag = false;
    for(int i = 0; i < n; i++) {
        cin >> val;
        if(val > large) {
            large = val;
            end = i;
        }
        if(val <= small) {
            small = val;
            start = i;
        }
    }
    if(start == end) {
        cout << "0";
    }
    else if(start < end) {
        cout << ((n-start-1) + (end) - 1);
    }
    else {
        cout << ((n-start-1) + (end));
    }
}