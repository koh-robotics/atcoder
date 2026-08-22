#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,m,k,total=0,keep;
    cin >> n >> m >> k;
    vector<long long> del(n+m,0);
    for (long long i = 0; i < n; i++){
        cin >> keep;
        if(i >= m){
            total = total - del.at(i);
        }

        if(total + keep > k){
            cout << "No" << endl;

        }
        else{
            total = total + keep;
            del.at(i+m) = keep;
            cout << "Yes" << endl;
        }
    }
}