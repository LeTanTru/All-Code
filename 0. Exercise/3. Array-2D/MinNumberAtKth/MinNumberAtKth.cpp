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

void solve(int n, int k, int a[][105]) {
    int tmp[n * n] = {0};
    int m = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            tmp[m++] = a[i][j];
        }
    }
    sort(tmp, tmp + m);
    cout << tmp[k - 1] << endl;
}

//Given a matrix sorted ascending row and column, find min value k-th
int main() {
    // fast();
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[105][105] = {0};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        solve(n, k, a);
    }
    return 0;
}
/*
1
4 7
10 20 30 40
15 25 35 45
24 29 37 48
32 33 39 50
*/