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
    int sum1 = 0, sum2 = -1e9;
    for(int i = 0; i < n; i++) {
        sum1 += a[i];
        sum2 = max(sum1, sum2);
        if(sum1 < 0) {
            sum1 = 0;
        }
    }
    cout << sum2;
    return 0;
}