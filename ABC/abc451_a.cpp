#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int a = 0;
    cin >> s;
    for (int i = 1; i-1 < s.size(); i++){
        if (s.size() % (i * 5) == 0){
            a++;
            break;
        }
    }
    if (a != 0){
        cout << "Yes" << endl;
    }
    if (a == 0){
        cout << "No" << endl;
    }

}
