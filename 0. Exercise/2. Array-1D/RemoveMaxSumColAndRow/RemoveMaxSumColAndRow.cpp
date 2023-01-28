#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define ll long long

int main() {
    fast();
    int n, m; cin >> n >> m;
    int a[105][105];
    FOR(i, 0, n) {
        FOR(j, 0, m) {
            cin >> a[i][j];
        }
    }
    int maxSumCol = -1e9, maxSumRow = -1e9, idxRow, idxCol;
    int sum = 0;
    FOR(i, 0, n) {
        sum = 0;
        FOR(j, 0, m) {
            sum += a[i][j];
        }
        if(sum > maxSumRow) {
            maxSumRow = sum;
            idxRow = i;
        }
    }
    FOR(i, 0, m) {
        sum = 0;
        FOR(j, 0, n) {
            sum += a[j][i];
        }
        if(sum > maxSumCol) {
            maxSumCol = sum;
            idxCol = i;
        }
    }
    FOR(i, 0, n) {
        if(i != idxRow) {
            FOR(j, 0, m) {
                if(j != idxCol) {
                    cout << a[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}

