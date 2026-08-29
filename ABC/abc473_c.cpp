#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,ans = 0,b;
    cin >> n >> k;
    vector<int> a(k,0);
    for(int i = 0; i < n; i++){
        cin >> b;
        a.at(b)++;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    b = a.at(0);
    for(int i = 1; i < n; i++){
        if(a.at(i) == b) ans++;
        else if( a.at(i) == b-1) ans++;
        else break;
    }
    cout << ans;


}