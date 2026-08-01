#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,c,n,co=0;
    cin >> n;
    vector<int> x(n+1);
    for (int i = 0; i < n; i++ ){
        cin >> x.at(i);
    }
    for (int i = 0; i < n-2; i++){
        if(x.at(i) < x.at(i+1) && x.at(i+1) > x.at(i+2)){
            co++;
        }
    }
    cout << co;
    

}
