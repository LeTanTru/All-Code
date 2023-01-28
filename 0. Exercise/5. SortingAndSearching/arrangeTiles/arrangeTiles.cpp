#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back


// https://www.youtube.com/watch?v=o11f2d7q_Ew&list=PLux-_phi0Rz0Hq9fDP4TlOulBl8APKp79&index=31&ab_channel=28tech
// 45:48
int main() {
    fast();
    int n; cin >> n;
    int a[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());
    int ans = 1;
    int do_cung = a[0];
    for(int i = 1; i < n; i++) {
        if(do_cung >= 1) {
            ++ans;
            do_cung = min(do_cung - 1, a[i]);
        } else break;
    }
    cout << ans << endl;
    return 0;
}