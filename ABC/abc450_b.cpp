#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,d = 0,a,b,c;
    cin >> N;
    vector<vector<int>> m(N-1,vector<int>(N-1,0));
    for (int i = 0; i < N-1; i++){
        for (int j = 0;j < N-i-1; j++){
            cin >> m.at(i).at(j);
        }
    }


    for (int i = 0; i < N-2; i++){
        for (int j = 0; j < N-2-i; j++){
            for (int l = 0; l < (N-2) - (i + j); l++){
                a = i;
                b = i + j + 1;
                c = i + j + l + 1;

                if (m.at(a).at(c) < m.at(a).at(b) + m.at(b).at(c)){
                    d++;
                } 


            }
        }


    }
    
    cout << d << endl;

}