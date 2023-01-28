#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

// https://competition.binus.ac.id/icpc2014/ps/icpc14jak-a.pdf

int main() {
    fast();
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) {
            cin >> x;
        }
        sort(a, a + n);
        int cnt = 1;
        for(int i = 1; i < n; i++) {
            if(a[i] - a[i - 1] <= k) {
                continue;
            } else {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}