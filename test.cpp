#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int l,r,n,count = 0,d;
    vector <int> a(26);
    cin >> n >> l >> r;
    cin >> s;
    vector<vector<int>> b(n, vector<int>(26,0));
    for (int i = 0; i < n; i++){
        a.at(s.at(i));
        b.at(i).at(s.at(i)) = 1;
        }
    for (int i = 0; i< 26; i++){
        a.at(i)
    }
    
    
    
    cout << count << endl;
}