#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,c=1,tco=0,fco=0,ans;
    string s;

    cin >> n >> s;
    vector<int> a(n+1,-10);
    for (int i = 0; i < n; i++){
        if(s.at(i) == 'x'){
            a.at(c) = i;
            c++;
        }
    }



    for (int i = 0; i < n; i++){
        if(s.at(i) == 'x'){
            fco++;
        }
        else{
            tco++;
        }
        ans = a.at(tco+fco)+1;
        if (ans < 0) {
            cout << n << endl;
        }
        else{
            cout << ans << endl;
        }

    }
}