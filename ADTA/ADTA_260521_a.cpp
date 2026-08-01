#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int counta=0,countb=0,countc=0;
    cin >> s;
    for (int i = 0; i < 3; i++){
        if (s.at(i)=='A'){
            counta=1;
        }
        else if(s.at(i)=='B'){
            countb=1;
        }
        else if(s.at(i) = 'C'){
            countc=1;
        }
    }
    if (counta==1&&countb==1&&countc==1){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}