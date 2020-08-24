#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int func(vector<int> &vec, int i, int val) {
    if(i>=val && vec[i-val]>0) {
        return (1+vec[i-val]);
    }
    return 0;
}

int main()  {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> vec(n+1,0);
    vec[0] = 1;
    for(int i = 1; i <= n; i++) {
        // cout << i << " " << func(vec,i,a) << " " <<  func(vec,i,b) << " " << func(vec,i,c) << endl;
        vec[i] = max(func(vec,i,a), max(func(vec,i,b), func(vec,i,c)));
    }

    // for(int i = 0; i <= n; i++) {
    //     cout << vec[i] << " ";
    // }
    cout << endl;

    cout << vec[n]-1;
}    