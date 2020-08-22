#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long int;

int main() {
    long long int n, k;
    cin >> n >> k;
    
    int ans = INT_MIN;

    for(long long int i = 0; i < n; i++) {
        long long int f, t;
        cin >> f >> t;
        int val;
        if(t <= k) {
            val = f;
        }
        else {
            val = f-(t-k);
        }
        if(val > ans) {
            ans = val;
        }
    }
    cout << ans;
}    