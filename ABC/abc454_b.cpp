#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n=0,m=0,b=0,check=0,d=0;
    cin >> n >> m;
    vector<int>a(m+1,0);
    vector<int>c(m+1,0);
    for (int i = 0; i < n; i++){
        cin >> b;
        a.at(b-1) = 1;
        c.at(b-1)++;
        cout << b << endl;
    }
    for (int i = 0; i < m; i++){
        if (a.at(i) == 1){
            check++;
        }
    }

    for (int i = 0; i < m; i++){
        if (c.at(i) == 0 || c.at(i) == 1){
            d++;
        }
        else{
            break;
        }
    }
    if (d == m){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    if (check == m){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}