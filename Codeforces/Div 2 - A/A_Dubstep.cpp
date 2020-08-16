#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	string s;
	cin>>s;
    int n= s.find("WUB");
    while (n!=-1){
        s.replace(n,3," ");
        n=s.find("WUB");
    }
		
	cout<< s;
}           