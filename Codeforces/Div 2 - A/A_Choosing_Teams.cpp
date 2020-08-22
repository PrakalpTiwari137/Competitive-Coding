#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        if(val <= (5-k)) {
            cnt++;
        }
    }
    cout << cnt/3;
}    