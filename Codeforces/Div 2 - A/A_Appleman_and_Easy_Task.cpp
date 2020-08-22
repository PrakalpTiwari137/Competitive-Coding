#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isSafe(int x, int y, int n) {
    if(x>=0 && x<n && y>=0 && y<n) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    bool arr[n][n];

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for(int j = 0; j < n; j++) {
            if(str[j]=='x') {
                arr[i][j] = 0;
            }
            else {
                arr[i][j] = 1;
            }
        }
    }

    bool check = true;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int cnt = 0;
            if(isSafe(i-1,j,n) && arr[i-1][j]) {
                cnt++;
            }
            if(isSafe(i,j-1,n) && arr[i][j-1]) {
                cnt++;
            }
            if(isSafe(i,j+1,n) && arr[i][j+1]) {
                cnt++;
            }
            if(isSafe(i+1,j,n) && arr[i+1][j]) {
                cnt++;
            }
            if(cnt%2) {
                check = false;
                break;
            }
        }
        if(!check) {
            break;
        }
    }
    if(check) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}    
