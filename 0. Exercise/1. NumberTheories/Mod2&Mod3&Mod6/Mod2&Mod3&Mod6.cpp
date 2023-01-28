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
//tach theo dau getline(ss, tmp, '.')

int solve(string s) {
    int n = s.size() - 1;
    if(ctoi(s[n]) % 2) {
        return 0;
    }
    int sum = 0;
    for(int i = 0; i <= n; i++) {
        sum += ctoi(s[i]);
    }
    if(sum % 3 != 0) {
        return 0;
    }
    if(ctoi(s[n]) == 0) {
        return 1;
    }
    return 0;
}

int main() {
    fast();
    string s;
    getline(cin, s);
    cout << solve(s);
    return 0;
}
