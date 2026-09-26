#include <bits/stdc++.h>
using namespace std;
 

int main() {
    int a,b,c;
    cin >> a >> b;
    if(a > b){
        c = a;
        a = b;
        b = c;
    }

    if(a == 0 && b == 0){
        cout << 1 << endl;
    }
    else if(a == 0 && b == 1){
        cout << 2 << endl;
    }
    else if(a == 0){
        cout << 1;
    }
    else{
        cout << 0;
    }
}