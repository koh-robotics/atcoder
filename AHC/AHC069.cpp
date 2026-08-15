#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m,r;
    cin >> n >> m >> r;
    vector<vector<char>> mas(n, vector<char>(n));
    vector<tuple<int,int,int>> co(m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mas.at(i).at(j);
        }
    }
    for (int i = 0; i < m; i++) {
        int a, b, c;
    // 一旦、普通の変数で入力を受け取る
        cin >> a >> b >> c; 
    
    // i番目の枠に直接セットする！
        co[i] = {a, b, c};   
    }

    
}