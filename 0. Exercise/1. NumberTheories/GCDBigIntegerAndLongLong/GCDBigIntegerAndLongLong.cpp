#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define endl "\n"
using ll = long long;
inline ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
inline int ctoi(char c) { return c - '0'; }
//tach theo dau getline(ss, tmp, '.')

int solve(string s, ll k) {
    ll r = 0; // find s % k
    for(int i = 0; i < s.size(); i++) {
        r = (r * 10 + ctoi(s[i])) % k;
    }
    ll ans = gcd(k, r);
    return ans;
}

// gcd(s, k) = gcd(k, s % k)
int main() {
    fast();
    string s;
    getline(cin, s);
    ll k;
    cin >> k;
    cout << solve(s, k);
    return 0;
}
