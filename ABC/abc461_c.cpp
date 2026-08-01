#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,m,in,nm,ans=0;
    cin >> n >> k >> m;
    vector<vector<int>> a(n+1, vector<int>(3,0));
    vector<int> b(n+1,0);
    
    for (int i = 0; i < n; i++){
        cin >> nm >> in;
        b.at(i) = in;
        if (a.at(nm).at(0) < in){
            a.at(nm).at(0) = in;
            a.at(nm).at(1) = nm;
            a.at(nm).at(2) = i;
        }
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < m; i++){
        ans = a.at(i).at(0) + ans;
        b.at( a.at(i).at(2) ) = 0;
    }
    k = k-m;
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < k; i++){
        ans = ans + b.at(i);
    }
    cout << ans;

    
    



}
