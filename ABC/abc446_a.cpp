#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    vector<char> a = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<char> b = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for (int i = 0; i < 26; i++){
        if (s.at(0) == b.at(i)){
            cout << "Of" << a.at(i);
            for (int j = 1; j < s.size(); j++){
                cout << s.at(j);
            }
        }
    }
}