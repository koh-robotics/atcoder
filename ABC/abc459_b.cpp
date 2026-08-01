#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n;
    vector<int> scount(n);
    for (int i = 0; i < n; i++){
        cin >> s;

        if (s.at(i) == 'a'||s.at(i) == 'b'||s.at(i) == 'c'){
            scount.at(i) = 2;
        }
        
        else if (s.at(i) == 'd'||s.at(i) == 'e'||s.at(i) == 'f'){
            scount.at(i) = 3;
        }
        
        else if (s.at(i) == 'g'||s.at(i) == 'h'||s.at(i) == 'i'){
            scount.at(i) = 4;
        }
        
        else if (s.at(i) == 'j'||s.at(i) == 'k'||s.at(i) == 'l'){
            scount.at(i) = 5;
        }
        
        else if (s.at(i) == 'm'||s.at(i) == 'n'||s.at(i) == 'o'){
            scount.at(i) = 6;
        }
        
        else if (s.at(i) == 'p'||s.at(i) == 'q'||s.at(i) == 'r'||s.at(i) == 's'){
            scount.at(i) = 7;
        }
        
        else if (s.at(i) == 't'||s.at(i) == 'u'||s.at(i) == 'v'){
            scount.at(i) = 8;
        }
        
        else if (s.at(i) == 'w'||s.at(i) == 'x'||s.at(i) == 'y'||s.at(i) == 'z'){
            scount.at(i) = 9;
        }


    }
    for (int i = 0; i < n; i ++){
        cout << scount.at(i);
    }

}
