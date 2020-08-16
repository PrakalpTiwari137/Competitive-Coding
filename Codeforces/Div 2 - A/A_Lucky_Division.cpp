#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isDiv(int num, string s) {
    int val = stoi(s);
    if(val > num) {
        return false;
    } 
    if(num%val == 0) {
        return true;
    }
    return (isDiv(num,s+"4") || isDiv(num,s+"7"));
}

int main() {
    int n;
    cin >> n;
    string str = "";

    if(isDiv(n,"4") || isDiv(n,"7")) {
        cout << "YES"; 
    }
    else {
        cout << "NO";
    }
}