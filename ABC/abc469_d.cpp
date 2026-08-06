#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m,a,b,c,ic,dcheck = 0;
    cin >> n >> m;
    vector<vector<int>> x(m,vector<int>(2));
    for(int i = 0; i < m; i++){
        cin >> x.at(i).at(0) >> x.at(i).at(1);

    }
    a = x.at(0).at(0); 
    b = x.at(0).at(1);
    while (true){
        int i =1;
        if(x.at(i).at(0) != a && x.at(i).at(0) != b){
            c = x.at(i).at(0);
            ic = i;
            break;
        }
        else(x.at(i).at(1) != a && x.at(i).at(1) != b){
            c = x.at(i).at(1);
            ic = i;
            break;
        }

    }
        while (true){
        int i = ic;
        if(x.at(li).at(0) != a && x.at(i).at(0) != b && x.at(i).at(0) != c){
            c = x.at(i).at(0);
            ic = i;
            break;
        }
        else(x.at(i).at(1) != a && x.at(i).at(1) != b && x.at(i).at(0) != c){
            c = x.at(i).at(1);
            ic = i;
            break;
        }

    }
    
}