#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(3,0);
    int val;
    for(int i=0; i<n; i++) {
        cin >> val;
        vec[i%3] += val; 
    }

    int ans = max(vec[0], max(vec[1], vec[2]));
    if(ans == vec[0]) {
        cout << "chest";
    }
    if(ans == vec[1]) {
        cout << "biceps";
    }
    if(ans == vec[2]) {
        cout << "back";
    }
}    