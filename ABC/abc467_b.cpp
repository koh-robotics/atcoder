#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,to=10000,so=10000;
    int a,b;
    string c;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a,b;
        string c;
        cin >> a >> b >> c;
        to = to - a;
        if(c == "keep"){
            so = so -b;
        }
        else{
            so = so-b;
        }
    }
    cout << so - to << endl;


}
