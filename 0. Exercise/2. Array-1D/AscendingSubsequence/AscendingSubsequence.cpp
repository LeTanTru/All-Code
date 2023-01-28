#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

int main() {
    fast();
    int n; cin >> n;
    int a[10005];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int res = 0, cnt = 0, b[10005], dem = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] > a[i - 1]) ++dem;
        else dem = 1;
        if(dem > res) {
            res = dem;
            b[0] = i - res + 1;
            cnt = 1;
        } else  if(dem == res) {
            b[cnt] = i - res + 1;
            ++cnt;
        }
    }
    cout << res << endl;
    // i: index of array b store start index of per sequence
    // j: order of per element of sequence
    for(int i = 0; i < cnt; i++) {
        for(int j = 0; j < res; j++) {
            cout << a[b[i] + j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
16
2 3 5 7 4 5 8 9 7 11 8 9 6 7 10 12

12
2 3 2 3 2 3 2 2 2 3 4 1
*/