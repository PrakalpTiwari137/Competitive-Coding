#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%2 == 1) {
        cout << -1;
    }
    else {
        vector<int> vec(n+1);
        for(int i = 0; i <= n; i++) {
            vec[i] = i;
        }

        int i = 1, j = n;
        while(i < j) {
            int temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
            i++;
            j--;
        }

        for(int i = 1; i <= n; i++) {
            cout << vec[i] << " ";
        }
    }
}    