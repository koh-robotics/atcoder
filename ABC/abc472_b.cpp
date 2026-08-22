#include <bits/stdc++.h>
using namespace std;
 
int main() {
    float n,total = 0,box,now=0,ans = 600000,c=0,b=0;
    cin >> n;
    vector<float> a(n);
    vector<float> x(n);
    vector<float> z(n-1);
    for (int i = 0; i < n; i++){
        cin >> box;
        a.at(i) = box;
        total = total + box;
        x.at(i) = total;
    }


    for (int i = 0; i < n-1; i++){
        z.at(i) = abs(x.at(i) - (total - x.at(i)));
    } 
    sort(z.begin(),z.end());
    cout << z.at(0);
}