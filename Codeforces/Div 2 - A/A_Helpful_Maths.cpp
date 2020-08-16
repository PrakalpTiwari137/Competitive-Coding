#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    vector<int> vec(3,0);

    for(int i = 0; i <= str.length(); i=i+2) {
        vec[str[i]-'1']++;
    }

    int j = 0;
    int i = 0;
    while(i <= str.length()) {
        if(vec[j] != 0) {
            str[i] = j+'1';
            vec[j]--;
            i = i+2;
        }
        else {
            j++;
        }
    } 
    cout << str;
}