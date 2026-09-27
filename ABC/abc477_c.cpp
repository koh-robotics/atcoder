#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main() {
    string s,t;
    int q,x,z,ts;
    cin >> q >> s >> t;
    ts = t.size();
    vector<int> a(s.size()+1,0);
    for (int i = 0; i <= (int)s.size() - (int)t.size(); i++) {
    
        if (s.compare(i, t.size(), t) == 0) {
            a.at(i) = a.at(i)+1;
            } 
    
    }
    for (int i = 0; i < (int)a.size() - 1; i++) {
        a.at(i + 1) += a.at(i); 
    }
    for(int i = 0; i < q; i++){
        cin >> x >> z;
        
        int left = x - 1;
        int right = z - ts;
        
        if (right < left) {
            cout << "No" << endl;
            continue; 
        }
        
        int count = 0;
        if (left == 0) {
            count = a.at(right);
        } else {
            count = a.at(right) - a.at(left - 1);
        }
        
        if (count > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
}