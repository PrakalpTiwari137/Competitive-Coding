#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, i, x = 0, y = 0, z = 0;
    cin >> a >> b;
    for(i = 1; i <= 6; i++) {
        if(abs(i-a) < abs(i-b))
            x++;
        else if(abs(i-a) > abs(i-b))
            y++;
        else z++;
    }
    cout << x << " " << z << " " << y;
}