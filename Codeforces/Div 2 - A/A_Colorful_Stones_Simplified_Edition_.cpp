#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    string s,t;
    cin >> s >> t;

    int i = 0;
    int j = 0;

    while(j<t.size() && i<s.size()) {
        if(t[j] == s[i]) {
            i++;
        }
        j++;
    }

    cout << i+1;
}    