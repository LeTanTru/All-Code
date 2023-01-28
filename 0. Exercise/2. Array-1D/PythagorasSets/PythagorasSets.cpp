#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long


int solve(ll a[], int n) {
    for(int i = n - 1; i >= 2; i--) {
        int l = 0, r = i - 1;
        while(l < r) {
            if(a[l] + a[r] == a[i]) return 1;
            else if(a[l] + a[r] < a[i]) ++l;
            else --r;
        }
    }
    return 0;
}

int main() {
    fast();
    int n; cin >> n;
    ll a[1005];
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        a[i] = x * x;
    }
    sort(a, a + n);
    cout << (solve(a, n) ? "YES" : "NO");
    return 0;
}