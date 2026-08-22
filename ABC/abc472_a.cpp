#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == 'A'){
            cout << s.at(i);
        }
        else{
            cout << '.';
        }
    }
}