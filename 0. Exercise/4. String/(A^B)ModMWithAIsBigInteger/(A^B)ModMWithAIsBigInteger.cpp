#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vll vector<long long>
#define vstr vector<string>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define endl "\n"
#define FOR_IN(n,a) for(int i=0;i<n;i++)  cin>>a[i]
#define FOR_INT_2(m, n, a) for(int i=0;i<m;i++){for(int j=0;j<n;j++){cin>>a[i][j];}}
using ll = long long;
inline int ctoi(char c) { return c - '0'; }
inline ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
//tach theo dau getline(ss, tmp, '.')   
ll getMod(string s, ll m) {
    ll res = 0;
    for(int i = 0; i < s.size(); i++) {
        res = res * 10 + ctoi(s[i]);
        res %= m;
    }
    return res;
}
// https://www.youtube.com/watch?v=5ZgpGL8hYZo&list=PLux-_phi0Rz3XyMk0JHqeN2DM69XDAyyo&index=36&ab_channel=28tech
int solve(ll a, ll b, ll m) {
    ll res = 1;
    while(b) {
        if(b % 2 == 1) {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

int main() {
    fast();
    string a;
    getline(cin, a);
    ll b; cin >> b;
    ll m; cin >> m;
    ll modVal = getMod(a, m);
    cout << solve(modVal, b, m);
    return 0;
}
