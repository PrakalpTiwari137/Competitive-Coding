#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sumx = 0, sumy = 0, sumz = 0;
    int x,y,z;

    for(int i = 0; i < n;i++) {
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }

    if(!sumx && !sumy && !sumz) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}    