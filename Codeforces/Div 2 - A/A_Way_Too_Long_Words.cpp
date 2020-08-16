#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string str;
        cin >> str;
        if(str.length() <= 10) {
            cout << str << endl;
        }
        else {
            string s = str[0] + to_string(str.length()-2) + str[str.length()-1];
            cout << s << endl;
        }
    }
}    