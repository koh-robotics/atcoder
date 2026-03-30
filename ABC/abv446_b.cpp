#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,M,L,check=0;
    cin >> N >> M;
    vector<int> no(M+1,1);//飲まれたジュース確認用配列
    
    //ここから飲めるジュース確認用プログラム
    for (int j = 0; j < N; j++){
        check = 0;
        cin >> L;
        vector<int> X(L);
        for (int i = 0; i < L; i++){
            cin >> X.at(i);
        }
        for (int i = 0; i < L; i++){
            if(no.at( X.at(i) ) == 1){
                cout << X.at(i) << endl;
                check++;
                no.at(X.at(i)) = 0;
                break;
            }
        }
        if (check == 0){
            cout << 0 << endl;
        }
    }


}