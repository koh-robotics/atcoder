#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,q,b,c,d,sc,sb;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> b >> c;
        a.at(i) = make_pair(c,b);
    }
    sort(a.begin(), a.end());


    cin >> q;
    vector<pair<int,int>> w(q);
    vector<pair<int,int>> ans(q);
    for (int i = 0; i < q; i++){
        cin >> d;
        w.at(i) = make_pair(d,i);
    }

    sort(a.begin(),a.end());

    for (int i = 0; i < n; i++){
        tie(sc,sb) = a.at(i);
        tie(c,b) = w.at(i);
        if (sc == c){

        } 
    }
}
