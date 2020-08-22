#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec;
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }

    int e_pos=1, o_pos=1;

    while(vec[e_pos]%2 != 0) {
        e_pos++;
    }
    while(vec[o_pos]%2 != 1) {
        o_pos++;
    }

    if(e_pos == 1) {
        cout << o_pos;
    } 
    else {
        cout << e_pos;
    }
}    