#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,c=0,k,all,count = 0;
    string b;
    cin >> n >> k;
    all = n;
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> b;
        if(b == "."){
            if(c == 0){
                a.at(i) = b;
            }
            else if(c > 0){
                c--;
                all--;
            }

        }
        else{
            c = k;
            a.at(i) = b;
        }
    }

        
    c = 0;
    for (int i = n-1; i >= 0; i--){
        if(a.at(i) == "." && c == 0){
            count++;

        }
        else if(a.at(i) == "G"){
            c = k;
        }
    }

    cout << count;

}

