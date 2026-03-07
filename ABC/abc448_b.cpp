#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,M,d = 0,p = 0,t = 0;
    cin >> N >> M;
    vector<int> c(M);
    for (int i = 0; i < M; i++){
        cin >> c.at(i);
    }
    
    vector<int> a(N);
    vector<int> b(N);
    for (int i = 0; i < N; i++){
        cin >> a.at(i) >> b.at(i);

    }
    for (int i = 0; i < N; i++){
        p = a.at(i)-1;
        if (c.at(p) - b.at(i) < 0){
          t += c.at(p);
          c.at(p) = 0;
        }
        else{
          c.at(p) = c.at(p) - b.at(i);
          t += b.at(i);
        }
    }
    cout << t << endl;
}
