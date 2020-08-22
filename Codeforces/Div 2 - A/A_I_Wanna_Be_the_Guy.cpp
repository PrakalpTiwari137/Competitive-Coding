#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n+1,0);

    int p;
    int val;
    cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> val;
        if(vec[val] == 0) {
            vec[val] = 1;
        }
    }
    cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> val;
        if(vec[val] == 0) {
            vec[val] = 1;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(vec[i] == 0) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}    