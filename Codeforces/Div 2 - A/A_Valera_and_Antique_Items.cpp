#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    long long int v;
    cin >> n >> v;
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        long long int val;
        for(int j = 0; j < x; j++) {
            cin >> val;
            if(val < v) {
                ans.push_back(i+1);
                break;
            }
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}    