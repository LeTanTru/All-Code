#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      

#define ll long long
int main() {
    fast();
    int n; cin >> n;
    int a[10005];
    for(int i = 0; i < n; i++) cin >> a[i];
    int res = 0, cnt = 1, idx;
    for(int i = 1; i < n; i++) {
        if(a[i] > a[i - 1]) {
            ++cnt;
        } else {
            cnt = 1;
        }
        if(cnt > res) {
            res = cnt;
            idx = i - res + 1;
        }
    }
    cout << res << endl;
    for(int i = 0; i < res; i++) {
        cout << a[i + idx] << " ";
    }
    return 0;
}