#include <bits/stdc++.h>
using namespace std;

int main() {
    int b = 0;
    vector <int> a(5);
    for (int i = 0; i < 5; i++){
        cin >> a.at(i);
    }
    for (int i = 0; i < 4; i++){
        if (a.at(i) == a.at(i + 1)){
            b++;
        }

    }
    if (b > 0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}
