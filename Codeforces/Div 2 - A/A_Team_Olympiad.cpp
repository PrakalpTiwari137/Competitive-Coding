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

    int i = 0, j = 0, k = 0;
    while(i<n && vec[i]!=1) {
        i++;
    }
    while(j<n && vec[j]!=2) {
        j++;
    }
    while(k<n && vec[k]!=3) {
        k++;
    }

    vector<vector<int>> ans;
    int cnt = 0;
    while(i<n && j<n && k<n) {
        cnt++;
        vector<int> temp(3,0);
        temp[0] = i+1;
        temp[1] = j+1;
        temp[2] = k+1;
        ans.push_back(temp);
        i++;
        j++;
        k++;
        while(i<n && vec[i]!=1) {
            i++;
        }
        while(j<n && vec[j]!=2) {
            j++;
        }
        while(k<n && vec[k]!=3) {
            k++;
        }
    }
    if(cnt==0) {
        cout << "0";
    }
    else {
        cout << cnt << endl;
        for(int x = 0; x < cnt; x++) {
            cout << ans[x][0] << " " << ans[x][1] << " " << ans[x][2] << endl;
        }
    }
}