#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    vector<int> home(101,0);
    vector<int> away(101,0);

    int t;
    cin >> t;
    int h, a;

    for(int i = 0; i < t; i++) {
        cin >> h >> a;
        home[h]++;
        away[a]++;
    }

    int total = 0;
    for(int i = 1; i <= 100; i++) {
        total = total + home[i]*away[i];
    }
    cout << total;
}    