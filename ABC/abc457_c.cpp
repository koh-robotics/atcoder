#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,k,l,keep=0,change,b=0,secondk=0;
    cin >> n >> k;
    secondk = k;
    vector<vector<int>> a(n);
    vector<int> lcount(n);
    for (int i = 0; i<n; i++){

        cin >> l;
        lcount.at(i) = l;
        a.at(i).resize(l);
        for (int j = 0; j<l; j++ ){
            cin >> a.at(i).at(j);
        }

    }
    for (int i = 0; i < n; i++){
        cin >> change;
        keep = change * lcount.at(i)+keep;
        if (keep >= k){
            
            keep = keep - secondk;
            keep = keep / lcount.at(i) -1;
            cout << a.at(i).at(keep);
            break;
        }
        secondk = keep;
    }
}
