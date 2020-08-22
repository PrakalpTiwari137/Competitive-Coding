#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    char diag, n_diag;
    string str;
    for(int i = 0; i < n; i++) {
        cin >> str;
        for(int j = 0; j < n; j++) {
            if(i==0 && j==0) {
                diag = str[j];
            }
            if(i==0 && j==1) {
                n_diag = str[j];
            }
            if(i==j || j==(n-1-i)) {
                if(str[j] != diag) {
                    cout << "NO";
                    return 0;
                }
            }
            else {
                if(str[j] != n_diag) {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    if(diag == n_diag) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }    
}    