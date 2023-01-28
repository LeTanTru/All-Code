#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

int main() {
    fast();
    int n, m; cin >> n >> m;
    int a[1005], b[1005];
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 0; i < m; i++)  cin >> b[i];
    int c[2005];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(a[i] < b[j]) {
            c[k++] = a[i], i++;
        } else {
            c[k++] = b[j], j++;
        }
    }
    while(i < n) c[k++] = a[i], i++;
    while(j < m) c[k++] = b[j], j++;
    for(i = 0; i < k; i++) {
        cout << c[i];
        if(i != k - 1) {
            cout << " ";
        }
    }

    return 0;
}
