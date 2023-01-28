#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

int main() {
    fast();
    int a[105], b[105];
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    int c[205], k = 0;
    int i = 0;
    while(i < n) {
        c[k++] = a[i];
        c[k++] = b[i];
        i++;
    }
    for(int i = 0; i < 2 * n; i++) {
        cout << c[i] << " ";
    }
    return 0;
}