#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isVow(char ch) {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='y'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'|| ch=='Y') {
        return true;
    }
    return false;
}

string conv(char ch) {
    if(ch>='A' && ch<='Z') {
        ch = ch - 'A' + 'a';
    }
    string str = ".";
    return (str + ch);
}

int main() {
    string str;
    cin >> str;
    
    string ans = "";
    for(int i = 0; i < str.length(); i++) {
        if(isVow(str[i])) {
            continue;
        }
        ans = ans + conv(str[i]);
    }
    cout << ans;
}    