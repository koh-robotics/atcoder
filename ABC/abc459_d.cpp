#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,b;
    char c;
    string s;
    cin >> t;
    vector<int> count(26.0);

    for (int l = 0; l < t; l++){

        cin >> s;
        for (int i=0; i < (int)s.size(); i++){
            char c = s.at(i);
            b = c-'a';
            count.at(b)++;
        }
        for (int i =0; i < 26; i++){
            
        }

    }