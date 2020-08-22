#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> vec;
    if(n==1) {
        cout << "Poor Alex";
        return 0;
    }
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a,b));
    }

    sort(vec.begin(), vec.end());
    for(int i = 1; i < n; i++) {
        if(vec[i].first>vec[i-1].first && vec[i].second<vec[i-1].second) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}