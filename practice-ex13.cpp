#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,a,b,ave;
  cin >> N;
  vector<int> vec(N);
  //make average
  for (int i = 0; i < N; i++) {
  cin >> vec.at(i);
  }
  for (int i = 0; i < N; i++) {
    a+= vec.at(i); 
  }
  ave = a/N;
  cout << ave << endl;

  for (int i = 0; i < N; i++) {
    b = ave - vec.at(i);
    if (b >= 0) {
      b = b * -1;
    }
    cout << b << endl;

  }

}
