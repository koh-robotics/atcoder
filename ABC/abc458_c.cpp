#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    long long scount=0,n=0,ans=0,b,c;
    cin >> s;
    b = s.size();
    vector<long long> a(b,0);
    for (long long i = 0; i < b; i++){
        if (s.at(i) == 'C'){
            scount++;
            a.at(n) = i;
            n++;
        }
    }

    for (long long i =0; i<scount; i++){
        c = a.at(i);
        ans = ans + min(c,b-1-c)+1;
    }
    cout << ans;
}
