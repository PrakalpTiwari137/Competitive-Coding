#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 == x2) {
        if(x1 >= 0)
            cout << x1-abs(y2-y1) << " " << y1 << x2-abs(y2-y1) << " " << y2;
        else 
            cout << x1+abs(y2-y1) << " " << y1 << x2+abs(y2-y1) << " " << y2;
    }
    else if(y1 == y2) {
        if(y1 >= 0)
            cout << x1 << " " << y1-abs(x2-x1) << x2 << " " << y2-abs(x2-x1);
        else 
            cout << x1 << " " << y1+abs(x2-x1) << x2 << " " << y2+abs(x2-x1);
    }
    else {
        int x = min(x1,x2);
        int y = min(y1,y2);
        
    }