#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    long long int num;
    cin >> num;
    string str = to_string(num);

    if(str[0] != '-') {
        cout << str;
    }
    else {
        if(str[str.length()-1] < str[str.length()-2]) {
            str[str.length()-2] = str[str.length()-1];
        }
        string str1 = str.substr(0,str.length()-1);
        if(str1[1] == '0') {
            cout << "0";
        }
        else {
            cout << str1;
        }
    }
}    