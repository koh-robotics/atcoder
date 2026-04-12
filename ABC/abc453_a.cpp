#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,b = 0;
    string s,a;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
        if (s.at(i) == 'o'){
            b++;
        }
        else {
            break;
        }
    }
    for (int i = b; i < n; i++){
        cout << s.at(i);
    }
}
