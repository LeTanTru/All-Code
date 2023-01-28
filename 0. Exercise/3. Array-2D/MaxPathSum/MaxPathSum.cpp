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
    fast();
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[105][105];
        FOR_INT_2(n, m, a);
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(j == 0) {
                    a[i][j] += max(a[i - 1][j], a[i - 1][j + 1]);
                } else if(j == m - 1) {
                    a[i][j] += max(a[i - 1][j], a[i - 1][j - 1]);
                } else {
                    a[i][j] += max({a[i - 1][j - 1], a[i - 1][j], a[i - 1][j + 1]});
                }
            }
        }
        cout << *max_element(a[n - 1], a[n - 1] + m) << endl;
    }
    return 0;
}

/*
1
4 6
10 10 2 0 20 4
1 0 0 30 2 5
0 10 4 0 2 0
1 0 2 20 0 4

Out: 74

*/