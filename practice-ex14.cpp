#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  vector <int> row(3);
  cin >> row.at(0) >> row.at(1) >> row.at(2);
  sort(row.begin(), row.end());
  cout << row.at(2) - row.at(0);

}
