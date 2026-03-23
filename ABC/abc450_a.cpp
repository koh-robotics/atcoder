#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,a;
    cin >> N;
    for (int i = 0; i < N; i++ ){
        a = N - i;
        if (a == 1){
            cout << a;
        }
        else {
            cout << a << ",";
        }
    }
}
