#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,point=0,b;
    cin >> n;
    vector<vector<int>> a(n+1, vector<int>(3));
    for (int i = 0; i < n; i++){
        cin >> a.at(i).at(0);
    }
    for (int i = 0; i < n; i++){
        cin >> a.at(i).at(1);
    }


    for (int i = 0; i <n; i++){
        b = a.at(i).at(0);
        if (i+1 == a.at(b-1).at(1)){
            point++;
        }
        else {
            break;
        }
    }


    if (point == n){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
