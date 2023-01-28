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

void solve1(int n, int m, int a[][105]) {
    map<int, int> mpr;
    map<int, int> mpc;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 1) {
                mpr[i] = j;
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j][i] == 1) {
                mpc[i] = j;
            }
        }
    }
    for(auto it : mpr) {
        for(int i = 0; i < m; i++) {
            a[it.first][i] = 1;
        }
    }

    for(auto it : mpc) {
        for(int i = 0; i < n; i++) {
            a[i][it.first] = 1;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void solve2(int n, int m, int a[][105]) {
    int b[105][105] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j]) {
                for(int k = 0; k < m; k++) {
                    b[i][k] = 1;
                }
                for(int k = 0; k < n; k++) {
                    b[k][j] = 1;
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // fast();
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[105][105] = {0};
        // solve1(n, m, a);
        solve2(n, m, a);
    }
    return 0;
}

//If one element in row i column j then change all element on row i and column to 1

/*
1
2 3
0 0 0
0 0 1

1
3 4
1 0 0 1
0 0 1 0
0 0 0 0
*/