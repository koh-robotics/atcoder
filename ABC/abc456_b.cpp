#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double ans;
    int a4=0,a5=0,a6=0,b4=0,b5=0,b6=0,c4=0,c5=0,c6=0,a;
    for (int i = 0; i < 6; i++){
        cin >> a;
        if (a == 4){
            a4++;
        }
        else if (a == 5){
            a5++;
        }
        else if (a==6){
            a6++;
        }
    }
    for (int i = 0; i < 6; i++){
        cin >> a;
        if (a == 4){
            b4++;
        }
        else if (a == 5){
            b5++;
        }
        else if (a==6){
            b6++;
        }
    }
    for (int i = 0; i < 6; i++){
        cin >> a;
        if (a == 4){
            c4++;
        }
        else if (a == 5){
            c5++;
        }
        else if (a==6){
            c6++;
        }
    }
    a = (a4*b5*c6)+(a4*b6*c5)+(a5*b4*c6)+(a5*b6*c4)+(a6*b4*c5)+(a6*b5*c4);
    ans = a/216.000000;
    cout << ans << endl;
}
