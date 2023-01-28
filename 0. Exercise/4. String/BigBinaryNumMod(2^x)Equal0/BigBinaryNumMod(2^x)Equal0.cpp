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

//x final bits that all equal zero is ok, just 1 bits equal 1 -> not ok

int solve(string s, int x) {
    if(s.size() <= x) return 0;
    for(int i = 0; i < x; i++) {
        if(s[s.size() - i - 1] == '1') {
            return 0;
        }
    }
    return 1;
}

int main() {
    fast();
    string s;
    getline(cin, s);
    int x; cin >> x;
    if(solve(s, x)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
