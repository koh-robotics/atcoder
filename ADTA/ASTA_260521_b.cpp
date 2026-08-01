#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,ans=1;
    cin >> a >> b;
    for (int i = 0; i < a-b-1; i++){
        ans = ans * 32;
    }
}