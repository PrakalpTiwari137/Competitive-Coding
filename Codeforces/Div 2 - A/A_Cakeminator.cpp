#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int ro = 0, co = 0;
    vector<int> row(r,1), col(c,1);
    for(int i = 0; i < r; i++) {
        string str;
        cin >> str;
        for(int j = 0; j < c; j++) {
            if(str[j]=='S' || str[j]=='s') {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for(int i = 0; i < r; i++) {
        if(row[i]) {
            ro++;
        }
    }
    
    for(int i = 0; i < c; i++) {
        if(col[i]) {
            co++;
        }
    }
    cout << (ro*c + (r-ro)*co);

}    