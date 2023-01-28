#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define endl "\n"
inline void FOR_IN(int n, int a[]) {
    for(int i = 0; i < n; i++)
        cin >> a[i];
}
using ll = long long;
inline int ctoi(char c) { return c - '0'; }
inline void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();
}
int isAlpha(char c) { return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'; }
int isNum(char c) { return c >= '0' && c <= '9'; }
//tach theo dau getline(ss, tmp, '.')
const int mod = 1e9 + 7;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int getMod(string n, ll m) {
    ll res = 0;
    for(int i = 0; i < n.size(); i++) {
        res = res * 10 + ctoi(n[i]);
        res %= m;
    }
    return res;
}

ll gcd(ll a, ll b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    // fast();
    string n;
    getline(cin, n);
    int m; cin >> m;
    ll r = getMod(n, m);
    cout << gcd(m, r);
    return 0;
}
