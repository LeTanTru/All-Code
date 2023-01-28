#include <bits/stdc++.h>
#include <stdlib.h>
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

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    fast();
    int n, m; cin >> n >> m;
    int a[505][505];
    FOR_INT_2(n, m, a);
    int res[505][505];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int sum = a[i][j];
            for(int k = 0; k < 8; k++) {
                int iNew = i + dx[k];
                int jNew = j + dy[k];
                if(iNew >= 0 && iNew < n && jNew >= 0 && jNew < m) {
                    sum += a[iNew][jNew];
                }
            }
            res[i][j] = sum;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// 4 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16