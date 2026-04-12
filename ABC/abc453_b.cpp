#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,x,b;
    cin >> t >> x;
    vector<int> a(t+1);
    for (int i = 0; i < t + 1; i++){
        cin >> a.at(i);
    }
    b = a.at(0);
    for (int i = 1; i < t+1; i++){
        if (b - a.at(i) == x || a.at(i) - b == x){
            b = a.at(i);
            cout << i << " " << a.at(i) << endl;
        }
        
    }

}
