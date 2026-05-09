#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n;
    vector<pair<int,int>> p(n);
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        p.at(i) = make_pair(b,a);
    }
    sort(p.begin(),p.end());
    for (int i = 0; i<n; i++){
        tie(b,a) = p.at(i);
        cout << a << " " << b <<endl;
    }
}
