#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m,a,b;
    cin >> n >> m;
    a = m%n;
    b = m / n;
    for(int i = 0; i < a; i++){
        cout << b+1 << endl;;
    }
    for(int i = 0; i < n-a; i++){
        cout << b << endl;
    }
    


}