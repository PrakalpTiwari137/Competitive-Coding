#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = (k*l)/nl;
    int slices = c*d;
    int salt = p/np;

    int ans = min(drink, min(slices,salt))/n;
    cout << ans;
}    