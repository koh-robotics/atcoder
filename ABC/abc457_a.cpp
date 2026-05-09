#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x;
    cin >> n;
    vector<int> a(n);
    for (int i =0; i<n; i++){
        cin >> a.at(i);
    }
    cin >> x;
    cout << a.at(x-1);
}
