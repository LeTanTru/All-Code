#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define endl "\n"
#define FOR_IN(n, a) for(int i=0;i<n;i++) cin>>a[i] 
#define FOR_INT_2(m, n, a) for(int i=0;i<m;i++){for(int j=0;j<n;j++){cin>>a[i][j];}}
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


int main() {
    // fast();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll a[402][402];
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
        int major[402][402] = {0}, minor[402][402] = {0};
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
                int tmp = min(i, j);
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