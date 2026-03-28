#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,count = 0,under = 0;
    cin >> N;
    vector<vector<int>> a(N, vector<int>(2));
    for (int i = 0;i < N; i++){ 
        cin >> a.at(N-1-i).at(0) >> a.at(N-1-i).at(1);
    }
    for (int i = 0; i < N; i++){

        if (a.at(i).at(0) == 1){

            if (a.at(i).at(1) > under){
                count++;
                cout << count << endl;
            }

        }
        else{

            if (a.at(i).at(1) > under){
                under = a.at(i).at(1);
                cout << count << endl;
            }

        }

    }



}
