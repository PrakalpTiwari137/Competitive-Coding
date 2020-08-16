#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int sum = 2*3 + 2*5 + 2*7;
    for(int i = 0; i < t; i++) {
        int num;
        cin >> num;

        if(num <= sum) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl << "6 10 14 " << num-sum << endl; 
        }
    }
}