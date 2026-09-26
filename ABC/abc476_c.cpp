#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x, y, z, q;

    cin >> n;
    cin >> x >> y >> z;

    vector<int> a = {x, y, z};

    sort(a.rbegin(), a.rend());

    x = a[0];
    y = a[1];
    z = a[2];

    cout << z << endl;

    for(int i = 3; i < n; i++){
        cin >> q;
        
        if(q >= x){
            z = y;
            y = x;
            x = q;
        }
        else if(q >= y){
            z = y;
            y = q;
        }
        else if(q > z){
            z = q;
        }
        
        cout << z << endl;
    }
}