#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,v,ans=0,b;
    cin >> n >> v;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a.at(i);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int l = 0; l< n; l++){
                b = a.at(i)+a.at(j)+a.at(l);
                if(i+j+l+3 <= v && i != j && j != l && i != l){
                    ans = max(ans,b);
                }
            }
        }
    }
    cout << ans;
}