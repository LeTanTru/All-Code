#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

int main() {
    fast();
    fstream input;
    input.open("INPUT.txt", ios::in);
    int c = 0, l = 0, cnt = 0;
    while(!input.eof()) {
        int n; input >> n;
        cnt++;
        if(n % 2 == 1) ++l;
        else ++c;
    }
    if(cnt % 2 == 0 && c > l) {
        cout << "C";
    } else if(cnt % 2 == 1 && l > c) {
        cout << "L";
    } else {
        cout << "NO";
    }
    cout << endl;
    return 0;
}