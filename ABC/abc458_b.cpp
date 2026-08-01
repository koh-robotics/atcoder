#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int h,w;
    cin >> h >> w;

    // h,w = 0
    if (h == 1 && w == 1){
        cout << 0 << endl;
    }

    //h = 0
    else if (h == 1){

        cout << "1";
        for (int i = 0; i < w-2; i++){
            cout << " 2";
        }
        cout << " 1" << endl;

    }


    //w = 0
    else if(w == 1){
        cout << "1" << endl;
        for (int i = 0; i < h-2; i++){
            cout << "2" << endl;
        }
        cout << "1" << endl;
    }
    

    else {
        for (int i = 0; i < h; i++){

            for (int j = 0; j < w; j++){
                if ((i == 0 && j ==0) || (i == h-1 && j == 0)|| (i == h-1 && j == w-1)||(i == 0 && j == w-1)){
                    cout << 2;
                }
                else if(i == 0 || i == h-1 || j == 0){
                    cout << 3;
                }
                else if (j == w-1){
                    cout << 3;
                }
                else {
                    cout << 4;
                }
                if (j < w - 1) {
                    cout << " ";
                }
                
            }
            cout << endl;
        }
    }
}
