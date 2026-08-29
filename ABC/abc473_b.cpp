#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,b,ans = 0,c;
    cin >> n;
    vector<int> a(100,0);
    for(int i = 0; i < n; i++){
        cin >> b;
        a.at(b)++;
        if(a.at(b) == 2){
            a.at(b) = 0;
        }
    }
    for(int i = 0; i < 100 ; i++){
        c = i * a.at(i);
        ans = ans + c;
    }
    cout << ans;
}