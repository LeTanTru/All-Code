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

void solve(int n, int m, int a[][105]) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        int cnt0 = 0, cnt1 = 0;
        for(int j = 0; j < m; j++) {
            if(a[i][j]) ++cnt1;
            else ++cnt0;
        }
        if(cnt1 > cnt0) {
            res++;
        }
    }
    cout << res << endl;
}

int main() {
    // fast();
    int t; cin >> t;
    while(t--) {
        int n, m = 3; cin >> n;
        int a[105][105] = {0};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        solve(n, m, a);
    }
    return 0;
}
