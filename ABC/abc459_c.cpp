#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,q,qu,count=0,x,a=0;
    cin >> n >> q;
    vector<int> c(n+1,0);
    vector<int> ycount(300000,0);
    for (int i = 0; i < q; i++){
        cin >> qu >> x;

        if(qu == 1){

            c.at(x-1)++;
            ycount.at((int)c.at(x-1))++;
            if (ycount.at(1) == n){
                a++;
            }

        }



        else{
            cout << c.at(x-a);
        }
            
    }

}
