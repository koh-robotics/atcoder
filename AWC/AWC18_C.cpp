#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,c = 0;
    cin >> n >> k;
    vector <int> m(n);
    vector <int> s(n * n);
    for (int i=0; i < n; i++){
        cin >> m.at(i);
    }
    
    for (int a = 0; a < n; a++){
        for (int b=0; b < n; b++){
            if (m.at(a) + m.at(b) <= k && a != b){
                s.at(c) = m.at(a) + m.at(b);
                c++;
            }
        }
    }
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout << s.at(0) << endl;



}