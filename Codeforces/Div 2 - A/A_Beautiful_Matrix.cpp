#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int arr[5][5];
    bool flag = false;
    int row, col, val;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> val;
            if(val == 1) {
                row = i;
                col = j;
                flag = true;
                break;
            }
        }
        if(flag) {
            break;
        }
    }
    cout << (abs(2-row) + abs(2-col));
}    