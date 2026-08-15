#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    cin >> a >> b;
    if(a+b==9){
        cout << "Nine";
    }
    else if(a-b==9){
        cout << "Nine";
    }
    else if(a*b==9){
        cout << "Nine";
    }
    else if(b*9==a){
        cout << "Nine";
    }
    else{
        cout << "Nein";
    }

}