#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    cout << s;
    if(s.at(s.size()-1) == 'e'){
        cout << "r" << endl;
    }
    else{
        cout << "er" << endl;
    }
}