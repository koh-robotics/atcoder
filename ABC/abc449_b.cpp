#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int h,w,q,count,c=0,d=0;
    cin >> h >> w >> q;
    vector<vector<int>> a(q, vector<int>(2));
    for (int i = 0; i < q; i++){
        cin >> a.at(i).at(0) >> a.at(i).at(1);
    }
    for (int i = 0; i < q; i++){
        if (a.at(i).at(0) == 2){
            cout << a.at(i).at(1) * h << endl;
            w = w - a.at(i).at(1);
        }
        else{
            cout << a.at(i).at(1) * w << endl;
            h = h - a.at(i).at(1);
        }
    }
}