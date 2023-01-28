#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long

int check(int n) {
    while(n) {
        int r = n % 10;
        n /= 10;
        if(r < n % 10) {
            return 0;
        }
    }
    return 1;
}

int main() {
    fast();
    fstream input;
    input.open("INPUT.txt", ios::in);
    map<int, int> mp;
    while(!input.eof()) {
        int n; input >> n;
        if(check(n)) {
            mp[n]++;
        }
    }
    for(auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}