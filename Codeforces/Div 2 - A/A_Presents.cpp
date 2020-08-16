#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n+1,0);

    for(int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        vec[val] = i;
    }

    for(int i = 1; i <= n; i++) {
        cout << vec[i] << " ";
    }
}