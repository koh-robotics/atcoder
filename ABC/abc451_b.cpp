#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,M,a,b;
    cin >> N >> M;
    vector<int> bumon(M+1);
    for (int i = 0; i < N; i++){
        cin >> a >> b;
        bumon.at(a-1)--;
        bumon.at(b-1)++;
    }
    for (int i = 0; i < M; i++){
        cout << bumon.at(i) << endl;
    }
}