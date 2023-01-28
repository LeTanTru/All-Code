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
int main(int argc, char **argv) {
    int n; cin >> n;
    int a[105][105];
    FOR_INT_2(n, n, a);
    vector<int> v;
    int r1 = 0, r2 = n - 1, c1 = 0, c2 = n - 1;
    while(r1 <= r2 && c1 <= c2) {
        for(int i = c1; i <= c2; i++) {
            // cout << a[r1][i] << " ";
            v.pb(a[r1][i]);
        }
        ++r1;
        for(int i = r1; i <= r2; i++) {
            // cout << a[i][c2] << " ";
            v.pb(a[i][c2]);
        }
        --c2;
        if(r1 <= r2) {
            for(int i = c2; i >= c1; i--) {
                // cout << a[r2][i] << " ";
                v.pb(a[r2][i]);
            }
            --r2;
        }
        if(c1 <= c2) {
            for(int i = r2; i >= r1; i--) {
                // cout << a[i][c1] << " ";
                v.pb(a[i][c1]);
            }
            ++c1;
        }
    }
    reverse(v.begin(), v.end());
    for(int x : v) {
        cout << x << " ";
    }
    return 0;
}
// 4
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

