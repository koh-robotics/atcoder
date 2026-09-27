#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;
    
    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x.at(i);
    }
    

    vector<int> ans;
    

    for (int i = 0; i < n; i++) {
        bool ok = true;
        
        for (int j = 0; j < n; j++) {
            if (i == j) continue; 

            if (abs(x.at(i) - x.at(j)) < d) {
                ok = false;
                break; 
            }
        }
        
        if (ok) {
            ans.push_back(i + 1);
        }
    }
    
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans.at(i);
        if (i != ans.size() - 1) {
            cout << " "; 
        }
    }
    cout << endl;
    
    return 0;
}