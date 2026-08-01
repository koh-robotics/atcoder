#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,check=0;
    cin >> n;
    vector<int> ans (n);
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        ans.at(i) = a+1;
        if (ans.at(i)>= b){
            cout << "No";
            check=1;
            break;
        }

    }
    if (check == 0){
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++){
          if (i == n-1){
            cout << ans.at(i);
          }
          else{
            cout << ans.at(i) << ' ';
          }
          }
        }
    }
