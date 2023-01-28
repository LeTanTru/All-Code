#include <bits/stdc++.h>
using namespace std;
#define pb push_baack
#define endl "\n"
using ll = long long;
#define fast() {ios_base::sync_with_stdio(false);cin.tie(); cout.tie();}
//tach theo dau getline(ss, tmp, '.')

int a[1000005];
int main() {
    fast();
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 1, res = 0;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] != a[i + 1]) {
            ++cnt;
        } else {
            cnt = 1;
        }
        res = max(res, cnt);
    }
    cout << res;
    return 0;
}