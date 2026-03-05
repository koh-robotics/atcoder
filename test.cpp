#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,count = 0,x;
    cin >> a;
    for (int i = 0; i < 5; i++){
        cin >> x;
        if (x == a){
            count++;
        }
    }
    cout << count;
    }