#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,tcount=0,count=0;
    string s;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++){
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        a.at(i) = s;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a.at(i) == a.at(j)){
                count++;
            }
        }
        tcount = max(tcount,count)+1;
    }
    cout << tcount;
}