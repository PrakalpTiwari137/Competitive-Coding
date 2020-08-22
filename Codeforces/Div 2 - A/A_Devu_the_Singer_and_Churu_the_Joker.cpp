#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum = sum + x;
    }

    if((sum + 10*(n-1)) > d) {
        cout << "-1";
    }
    else {
        d = d - sum;
        cout << d/5;
    }
}    