#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,a=2,b=1;
    cin >> n;
    for (int i = 0; i < n-1; i++){
        a = a + b;
        swap(a, b);
    }
  cout << b;
}