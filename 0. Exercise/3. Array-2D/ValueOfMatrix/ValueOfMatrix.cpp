#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(), a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"


typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int)1e9 + 7;
const int INF = (int)1e9 + 2804;
inline ll gcd(ll a, ll b) { ll r; while(b) { r = a % b; a = b; b = r; }return a; }
inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int major[402][402], minor[402][402] = {0};


// https://www.youtube.com/watch?v=XKxByfH9ci4&list=PLux-_phi0Rz0Hq9fDP4TlOulBl8APKp79&index=15&ab_channel=28tech
// 23:22
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; TC = 1;
    while(TC--) {
        int n, m; cin >> n;
        int a[n + 1][n + 1];
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) cin >> a[i][j];
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == 1 || j == 1) {
                    major[i][j] = a[i][j];
                } else {
                    major[i][j] = a[i][j] + major[i - 1][j - 1];
                }
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = n; j >= 1; j--) {
                if(i == 1 || j == n) {
                    minor[i][j] = a[i][j];
                } else {
                    minor[i][j] = minor[i - 1][j + 1] + a[i][j];
                }
            }
        }
        ll ans = -1e18;
        for(int i = n; i >= 1; i--) {
            for(int j = n; j >= 1; j--) {
                int tmp = min(j, i);
                int hang = i - tmp, cot = j - tmp;
                for(int k = 0; k < min(i, j); k++) {
                    ans = max(ans, 0ll + major[i][j] - major[hang + k][cot + k] -
                        (minor[i][cot + k + 1] - minor[hang + k][j + 1]));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}