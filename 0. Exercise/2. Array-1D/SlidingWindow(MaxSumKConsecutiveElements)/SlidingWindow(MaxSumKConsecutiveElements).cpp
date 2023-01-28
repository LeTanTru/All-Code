#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

int main() {
    fast();
    int n, k; cin >> n >> k;
    int a[10005];
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = 0, res = 0, idx;
    for(int i = 0; i < k; i++) {
        sum += a[i];
    }
    res = sum;
    for(int i = 1; i < n - k + 1; i++) {
        sum = sum - a[i - 1] + a[i + k - 1];
        if(sum > res) {
            res = sum;
            idx = i;
        }
    }
    cout << res << endl;
    for(int i = 0; i < k; i++) {
        cout << a[i + idx];
        if(i != k - 1) {
            cout << " ";
        }
    }
    return 0;
}