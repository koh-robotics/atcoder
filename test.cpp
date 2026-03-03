#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int>count(5);
    count.at(3) = 0;
    count.at(2) = 0;
    cout << min(count.at(3), count.at(2));

    }