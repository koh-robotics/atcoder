#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    string a;
    int count,ans=0;
    cin >> a;
    count = a.size();
    for(int i = 0; i < count; i++){
        if (a.at(count -1 - i) == '1'){
            ans = ans + pow(2,i);
        }
    }
    cout << ans;
}
