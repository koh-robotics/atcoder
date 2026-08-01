#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int h,w;
    cin >> h >> w;
    vector<vector<char>> x(h+1,vector<char>(w+1));



    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> x.at(i).at(j);
        }
    }
    int a=h,b=-1,c=w,d=-1;
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if(x.at(i).at(j) == '#'){
                a = min(a,i);
                b = max(b,i);
                c = min(c,j);
                d = max(d,j);
            }
        }
    }
    
    for (int i = a; i < b+1; i++){
        for (int j = c; j < d+1; j++){
            cout << x.at(i).at(j);
            if(j == d){
                cout << endl;
            }
        }
    }
}
