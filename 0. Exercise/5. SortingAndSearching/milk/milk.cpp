#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

int main() {
    fast();
    int n; cin >> n;
    int a[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > i) {
            ans += a[i] - i;
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}