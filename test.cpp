#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    unsigned long long x = 6000000000000000000ULL;
    for (unsigned long long i = 0; i < x; i++){
        unsigned long long a = i+1;
        while(a != 1){
            if(a % 2 == 0){
                a = a/2;
            }
                else{
                a = 3 * a +1;
            }
            

        }
        if (a != 1){
            cout << i+1 << endl;
            cout << ("yesyesyesyesyes");
            break;
        }
        else{
            if((i + 1)% 1000000 == 0){
                cout << i+1 << endl;
            }
        }
    }
}
