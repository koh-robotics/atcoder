#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,c,count = 0;
    char a;
    cin >> n >> a;
    c = a-'A';
    vector<vector<char>> b(n+1, vector<char>(6));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 5; j++){
            cin >> b.at(i).at(j);
        }
    }
    

    for (int i = 0; i < n; i++){
        if (b.at(i).at(c) == 'o'){
            count++;
        }
    }
    if (count >= 1){
        cout << "Yes";
    }
    else {
        cout << "No";
    }

}
