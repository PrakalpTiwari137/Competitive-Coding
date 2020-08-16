#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void func(vector<int> &vec) {
    sort(vec.begin(), vec.end());
    bool check = true;
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i]-vec[i-1] > 1) {
            check = false;
            break;
        }
    }

    if(check) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> vec;

        for(int j = 0;j < n; j++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }

        func(vec);
    }
}    