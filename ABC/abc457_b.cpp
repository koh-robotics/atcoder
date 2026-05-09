#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x,y,l;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i =0; i<n;i++){
        cin >> l;
        a.at(i).resize(l);
        for (int j = 0; j<l; j++){
            cin >> a.at(i).at(j);
        }
    }
    cin >> x >> y;
    cout << a.at(x-1).at(y-1);
}
