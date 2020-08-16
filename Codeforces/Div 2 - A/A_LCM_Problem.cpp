#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i < t; i++) {
        long long int l,r;
        cin >> l >> r;
        if(l*2 <= r) {
            cout << l << " " << l*2 << endl;
        }
        else {
            cout << "-1 -1" << endl;
        }
    }
    return 0;
}    