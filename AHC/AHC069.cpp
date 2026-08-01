#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m,r;
    cin >> n >> m >> r;
    vector<vector<char>> mas(n, vector<char>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mas.at(i).at(j);
        }
    }
}