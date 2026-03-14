#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int l,r,n,count = 0;
    cin >> n >> l >> r;
    cin >> s;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (s.at(i) == s.at(j) && l <= j - i && j - i <= r ){
                count ++;
            }

        }
    }
    cout  << count << endl;
}