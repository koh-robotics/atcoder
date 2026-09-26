#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,ans = 0;
    string s,t;
    cin >> n >> s >> t;
    for(int i = 0; i < n; i++){
        if(t.at(i) != '*'){
            if(t.at(i) != s.at(i)){
                ans = 1;
            }
        }
    }
    if(ans == 1){
        cout << "No";
    }
    else{
        cout << "Yes";
    }

}