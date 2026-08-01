#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,check;
    cin >> n;
    for (int j = 0; j < n; j++){
    for (int i = 0; i < n; i++){
        cin >> check;
        if (i == n-1){
            if (check == 1){
                cout << i+1 << endl;
            }
            else{
                cout << endl;
            }
        }
        else{
            if (check == 1){
                cout << i+1 << ' ';
            }
        }
    }
    }
      
    }