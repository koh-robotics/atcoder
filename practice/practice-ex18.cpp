#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  vector<vector<char>> resu(N,vector<char>(N));
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  for (int i = 0; i < M; i++){
    resu.at(A.at(i)).at(B.at(i)) = 'o';
    resu.at(B.at(i)).at(A.at(i)) = 'x';
     
  }
  for (int i = 0; i < N; i ++){
    for (int j = 0; j < N; j++){
        if (resu.at(i).at(j) != 'o' || resu.at(i).at(j) != 'x'   ){
            resu.at(i).at(j) = '-';
        }
    }
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
}