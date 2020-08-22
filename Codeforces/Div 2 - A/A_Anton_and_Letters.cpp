#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec(26,0);

    char ch;
    int cnt = 0;
    while(true) {
        cin >> ch;
        if(ch == '}') {
            break;
        }
        if((ch == '{') || (ch == ',') || (ch == ' ')) {
            continue;    
        }
        if(vec[ch-'a'] == 0) {
            vec[ch-'a'] = 1;
            cnt++;
        }
    }
    cout << cnt;
}    