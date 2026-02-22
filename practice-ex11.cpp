#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, B, a;
  string M;

  cin >> N >> a;
  
  
  for (int i = 0; i < N; i++){
    cin >> M >> B;
    if (M == "+"){
      a += B;
      cout << i+1 <<":"<< a << endl;
    }   

    else if (M == "-"){
      a -= B;
      cout << i+1 <<":"<< a << endl;

    }

    else if (M == "*"){
      a *= B;
      cout << i+1 <<":"<< a << endl;
    }

    else if (M == "/"){
      if (B == 0){
        cout << "error" << endl;
        break;
      }
      else{
        a /= B; 
        cout << i+1 <<":"<< a << endl;
      }
    }
  }
}
