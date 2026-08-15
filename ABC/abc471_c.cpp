#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,ans=0,x,z=0,ac=0,bc=0,nspo=0;
    cin >> n;
    vector<long long> a;
    vector<long long> b;
    for (long long i = 0; i < n; i++){
        cin >> x;
        if(x < 0){
           b.push_back(x);
        }
        else{
            a.push_back(x);
            
        }

    }
    ac = 0;
    bc = 0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(), b.end());


    while(ac<a.size()&&bc<b.size()){
        if(abs(a.at(ac) - nspo) > abs(b.at(bc) - nspo)){ //マイナス（ｂ）のほうが現在地から近い
            ans = ans + abs(b.at(bc)-nspo);
            nspo = b.at(bc);
            bc++;
        }
        else if(abs(a.at(ac) - nspo) < abs(b.at(bc) - nspo)){//プラス（a）のほうが現在地から近い
            ans = ans + abs(a.at(ac)-nspo);
            nspo = a.at(ac);
            ac++;
        }
        else{//どちらも同じ距離
            ans = ans + abs(b.at(bc)-nspo);
            nspo = b.at(bc);
            bc++;
        }
    }
    while(ac < a.size()){
        ans = ans + abs(a.at(ac) - nspo);
        nspo = a.at(ac);
        ac++;
    }


    while(bc < b.size()){
        ans = ans + abs(b.at(bc) - nspo);
        nspo = b.at(bc);
        bc++;
    }

    cout << ans;


}