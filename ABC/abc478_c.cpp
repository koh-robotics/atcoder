#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,x=0,y=0,now=0,ans=0,start = -1,end = 0;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> y;
        a.at(i) = y;
        b.at(i) = y;
    }
    sort(b.begin(),b.end());
    for(int i = 0; i < n; i++){
        if(a.at(i) != b.at(i)){
            start = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(a.at(i) != b.at(i)){
            end = i;
            break;
        }
    }

    if (start == -1) {
        cout << "Yes";
    }
    else if(end-start+1 <= k){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    

}