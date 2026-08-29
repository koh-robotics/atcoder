#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,b,ans = 0;
    cin >> n;
    b = n/2;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a.at(i);
    }
    for(int i = b; i < n; i++){
        ans = ans + a.at(i);
    }
    cout << ans;

}