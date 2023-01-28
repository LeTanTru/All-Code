#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long

int cmp(const void *a, const void *b) {
    int *x = (int *)a;
    int *y = (int *)b;
    return *x > *y;
}

int main() {
    fast();
    int n; cin >> n;
    int a[1005];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    qsort(a, n, sizeof(a[0]), cmp);
    int res = 1e9, cnt = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] - a[i - 1] < res) {
            res = a[i] - a[i - 1];
            cnt = 1;
        } else if(a[i] - a[i - 1] == res) {
            ++cnt;
        }
    }
    cout << res << " " << cnt << endl;
    return 0;
}