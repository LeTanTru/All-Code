#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

int main() {
    fast();
    int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt += n / a[i];
        n %= a[i];
    }
    cout << cnt;
    return 0;
}