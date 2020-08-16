#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int pos(char ch) {
    if(ch=='h') {
        return 1;
    }
    if(ch=='e') {
        return 2;
    }
    if(ch=='l') {
        return 3;
    }
    if(ch=='o') {
        return 4;
    }
    return -1;
}

int main() {
    string str;
    cin >> str;

    vector<int> vec(5,0);
    vec[0] = 1;
    for(int i = 0; i < str.length(); i++) {
        if(vec[pos(str[i])] == -1) {
            continue;
        }
        else {
            if(vec[pos(str[i])-1] > 0) {
                vec[pos(str[i])]++;
            }
        }
    }

    if(vec[1]>=1 && vec[2]>=1 && vec[3]>=2 && vec[4]>=1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}    