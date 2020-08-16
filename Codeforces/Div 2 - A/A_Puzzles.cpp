#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> vec;

    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    } 

    sort(vec.begin(), vec.end());

    int i = 0, j = n-1;
    int diff = INT_MAX;

    while(j < m) {
        int temp = vec[j]-vec[i];
        if(temp < diff) {
            diff = temp;
        }
        i++;
        j++;
    }
    cout << diff;

}    