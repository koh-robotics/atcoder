#include <bits/stdc++.h>
using namespace std;
 

int main() {
  string s;
  int a = 0,b = 0,c = 0;
  
  cin >> s;
  a = s.size();
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == '+'){
      b++;
    }
    else if (s.at(i) == '-') {
      c++;
    }
  }
  a = 1 + b - c;
  cout << a << endl; 
}
