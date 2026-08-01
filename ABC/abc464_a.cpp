#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int e=0,w=0;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s.at(i) == 'W'){
            w++;
        }
        else{
            e++;
        }
    }
    if(e < w){
        cout << "West";
    }
    else{
        cout << "East";
    }
}
