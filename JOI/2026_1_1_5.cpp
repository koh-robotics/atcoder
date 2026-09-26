#include <bits/stdc++.h>
using namespace std;
 

int main() {
    string s;
    int n;
    bool x = true;
    cin >> s;
    n = s.size();
    reverse(s.begin(),s.end());
    while(true){
        if(n == 0){
            cout << "Yes";
            break;
        }
        if(n >= 4 && s.at(n-4) == 'G' && s.at(n-3) == 'I' && s.at(n-2) == 'O' && s.at(n-1) == 'J'){
            s.resize(s.size() - 4);
            n = n-4;
        }
        else if(n >= 3 && s.at(n-3) == 'I' && s.at(n-2) == 'O' && s.at(n-1) == 'J'){
            s.resize(s.size() - 3);
            n = n-3;
        }
        else if(n >= 3 && s.at(n-3) == 'I' && s.at(n-2) == 'O' && s.at(n-1) == 'I'){
            s.resize(s.size() - 3);
            n = n-3;
        }
        else{
            cout << "No";
            break;
        }
    }
}