#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
        sum = sum+x;
    }

    sort(vec.begin(), vec.end());

    int num = 0, sum2 = 0;
    int j = vec.size()-1;
    while((sum2 <= sum) && j>=0) {
        sum2 = sum2+vec[j];
        sum = sum-vec[j];
        num++;
        j--;
    }

    cout << num;

}    