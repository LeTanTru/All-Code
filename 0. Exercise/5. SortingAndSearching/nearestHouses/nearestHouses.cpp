#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

int main() {
    fast();
    int n; cin >> n;
    vector<int> v(n);
    for(int &x : v) {
        cin >> x;
    }

    sort(begin(v), end(v));
    int ans = INT_MAX;
    for(int i = 0; i < n - 1; i++) {
        ans = min(ans, v[i + 1] - v[i]);
    }

    cout << ans << endl;
    return 0;
}