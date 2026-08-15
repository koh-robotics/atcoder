#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x;
    cin >> n;
    vector<int> a(n,0);
    for (int i = 0; i < n; i++){
        cin >> x;
        a.at(x-1)++;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    cout << n - a.at(0) << endl;
}