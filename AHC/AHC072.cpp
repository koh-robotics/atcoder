#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    string s;
    cin >> n >> k;
    //vectorの2次元配列でフィールドを制作
    vector<vector<char>> field(n, vector<char>(n,0));

    //fieldに読み込み
    for (int i = 0; i < n; i++){
        cin >> s;
        for (int j =0; j < n; j++){
            field.at(i).at(j) = s.at(j);
        }
    }

    

}