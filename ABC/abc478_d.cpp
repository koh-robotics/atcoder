#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,q,l,r,x,w=0;
    cin >> n >> q;
    vector<long long> a(n+2,0);
    for(long long i = 0; i < q; i++){
        cin >> l >> r >> x;
        a.at(l) = a.at(l)+x;
        a.at(r+1) = a.at(r+1)-x;
    }
    for(long long i = 1; i <= n; i++){
        w = w+a.at(i);
        if(i == n){
            cout << w;
        }
        else{
            cout << w << " ";
        }
    }

}