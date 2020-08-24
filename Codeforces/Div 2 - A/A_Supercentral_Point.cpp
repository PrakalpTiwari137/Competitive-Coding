#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool comp1(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.first < b.first) ||
                ((a.first == b.first) && (a.second < b.second)); 
}

bool comp2(const pair<int,int> &a, const pair<int,int> &b) {
   return (a.second < b.second) ||
                ((a.second == b.second) && (a.first < b.first)); 
}                

void func(vector<pair<int,int>> &vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i].first << " " << vec[i].second << endl; 
    }
}

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> vec;

    for(int i = 0; i< n; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a,b));
    }
    // func(vec);
    // cout << endl;
    unordered_set<string> us;

    sort(vec.begin(), vec.end(), comp1);
    // func(vec);
    // cout << endl;

    for(int i = 1; i < n-1; i++) {
        if(vec[i-1].first==vec[i].first && vec[i].first==vec[i+1].first) {
            if(vec[i].second>vec[i-1].second && vec[i].second<vec[i+1].second) {
                us.insert(to_string(vec[i].first)+"|"+to_string(vec[i].second));
            }
        }
    }

    sort(vec.begin(), vec.end(), comp2);
    // func(vec);
    // cout << endl;
    int cnt = 0;

    for(int i = 1; i < n-1; i++) {
        if(vec[i-1].second==vec[i].second && vec[i].second==vec[i+1].second) {
            if(vec[i].first>vec[i-1].first && vec[i].first<vec[i+1].first) {
                if(us.find(to_string(vec[i].first)+"|"+to_string(vec[i].second)) != us.end()) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

}    