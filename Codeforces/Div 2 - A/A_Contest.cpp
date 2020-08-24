#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int s1 = max(3*a/10, a-c*(a/250));
    int s2 = max(3*b/10, b-d*(b/250));

    if(s1 > s2) {
        cout << "Misha";
    }
    else if(s1 < s2) {
        cout << "Vasya";
    }
    else {
        cout << "Tie";
    }
}