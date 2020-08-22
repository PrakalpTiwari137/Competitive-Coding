#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    double val1 = (double)b/(double)m;
    double val2 = (double)a;

    if(val1 < val2) {
        int ans1 = (n/m)*b + (n%m)*a;
        int ans2 = ceil((double)n/(double)m)*b;
        int ans = min(ans1, ans2);
        cout << ans;
    }
    else {
        cout << n*a;
    }
}    