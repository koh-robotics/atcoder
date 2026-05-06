#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,b=0,c=0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a.at(i);
    }
    for (int i = 0; i < n; i++){
        while(true){
            if (a.at(i) % 2 == 1){
                break;
            }
            b++;
        }
        c = max(b,c);    
    }
    cout << c << endl;
}
