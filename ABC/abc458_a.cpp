#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int n,a;
    cin >> s >> n;
    a = s.size() - 2 * n;
    for (int i = 0; i < a; i++ ){
        cout << s.at(i+n);
    }
}
