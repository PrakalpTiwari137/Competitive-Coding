#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int comp(char ch1, char ch2) {
    if(ch1>='A' && ch1<='Z') {
        ch1 = ch1-'A'+'a';
    }
    if(ch2>='A' && ch2<='Z') {
        ch2 = ch2-'A'+'a';
    }
    if(ch1<ch2) {
        return -1;
    }
    else if(ch1==ch2) {
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    for(int i=0; i<str1.length();i++) {
        if(comp(str1[i],str2[i])!=0) {
            cout << comp(str1[i],str2[i]);
            return 0;
        }
    }
    cout << "0";

}