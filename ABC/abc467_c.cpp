#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m,a1,a2,b,counta = 0,countb=0;
    cin >> n >> m;
    vector<int> ax(n);
    vector<int> ab(n);
    vector<int> bx(n-1);
    
    for (int i = 0; i < n; i++){
        cin >> ax.at(i);
        ab.at(i) = ax.at(i);
    }
    for (int i = 0; i < n-1; i++){
        cin >> bx.at(i);
    }
    for (int i = 0; i < n-1; i++){

        a1 = ax.at(i);
        a2 = ax.at(i+1);
        b = bx.at(i);

        if((a1+a2) % 2 != b ){
            ax.at(i+1) = ax.at(i+1) + 1;
            counta++;
        }

    }

    ab.at(0) = ab.at(0) + 1;
    countb = 1;

    for (int i = 0; i < n-1; i++){

        a1 = ab.at(i);
        a2 = ab.at(i+1);
        b = bx.at(i);

        if((a1+a2) % 2 != b ){
            ab.at(i+1) = ab.at(i+1) + 1;
            countb++;
        }

    }

    cout << min(counta,countb) << endl;


}

