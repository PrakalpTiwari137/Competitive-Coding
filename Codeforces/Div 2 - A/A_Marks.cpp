#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec;

    for(int i = 0; i < n; i++) {
        vector<int> temp(m);
        string str;
        cin >> str;
        for(int j = 0; j < m; j++) {
            temp[j] = str[j]-'0';
        }
        vec.push_back(temp);
    }

    unordered_set<int> us;

    for(int j = 0; j < m; j++) {
        vector<int> temp;
        int val = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(vec[i][j] > val) {
                temp.clear();
                temp.push_back(i);
                val = vec[i][j];
            }
            else if(vec[i][j] == val) {
                temp.push_back(i);
            }
        }
        for(int k = 0; k < temp.size(); k++) {
            us.insert(temp[k]);
        }
    }

    cout << us.size();
}