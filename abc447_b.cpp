#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s,a;
    int b,c,e;
    c = 0;
    char d;
    cin >> s;
    s = a;
    b = s.size();
    vector<int>count(b);
    sort(s.begin(),s.end());
    d = s.at(0);
    for (int i = 0;i > b;i++){
        if (s.at(i) == d){
            count.at(c) = +1;
        }
        else{
            c++; 
        }

    }



}