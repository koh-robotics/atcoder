#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,ans = 0,l=0;
    string s;
    cin >> n >> s;
    s = s + 'x';
    for (int i = 0; i < n; i++){
        if(s.at(i) == 'x'){
            if(s.at(i + 1) == 'x' && l == 0){
                ans++;
                l = 0;
            }
            else{
                l = 0;
            }

        }
        else{
            l = 1;
        }
    }
  cout << ans;
}