#include <bits/stdc++.h>
using namespace std;
 

int main() {
    long long n,count=0;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a.at(i);
    }
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            if(i < j){
                if(a.at(i) % a.at(j) == 0){
                    count++;
                }
            }
        }
    }
    cout << count;
}