#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    long long h,w,k;
    string s;
    cin >> h >> w >> k;
    vector<vector<char>> x(h, vector<char>(w));
    for(int i = 0; i < h; i++){
        cin >> s;
        for(int j = 0; j < w; j++){
            x.at(i).at(j) = s.at(j);
        }
    }
    for(int i = 0; i < h; i++){
        cin >> s;
        for(int j = 0; j < w; j++){
            x.at(i).at(j) = s.at(j);
        }
    }

}
