#include <bits/stdc++.h>
using namespace std;
 

int main() {
    int c,ab=0,bb=0,ai=0,bi=0;
    vector<int> a(16);
    vector<int> b(16);
    for (int i = 0; i < 16; i++){
        cin >> c;
        a.at(i) = c;
        if(ab < c){
            ai = i;
            ab = c;
        }

    }
    for (int i = 0; i < 16; i++){
        cin >> c;
        b.at(i) = c;
        if(bb < c){
            bi = i;
            bb = c;
        }
    }
    if(bb < ab){
        cout << bi+1+16;
    }
    else{
        cout << ai+1;
    }


}