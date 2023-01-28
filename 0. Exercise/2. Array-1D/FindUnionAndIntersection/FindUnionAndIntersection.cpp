#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

void findUnion(int a[], int n, int b[], int m) {
    bool ok[1005];
    vector<int> v;
    memset(ok, false, sizeof(ok));
    for(int i = 0; i < n; i++) {
        if(!ok[a[i]]) {
            v.push_back(a[i]);
            ok[a[i]] = true;
        }
    }
    for(int i = 0; i < m; i++) {
        if(!ok[b[i]]) {
            v.push_back(b[i]);
            ok[b[i]] = true;
        }
    }
    for(int x : v) {
        cout << x << " ";
    }
}

void findIntersection(int a[], int n, int b[], int m) {
    vector<int> v;
    bool ok[1005];
    memset(ok, false, sizeof(false));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i] == b[j] && !ok[b[j]]) {
                v.push_back(b[j]);
                ok[b[j]] = true;
            }
        }
    }
    for(int x : v) {
        cout << x << " ";
    }
}

int main() {
    fast();
    int n, m; cin >> n >> m;
    int a[1005], b[1005];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    findUnion(a, n, b, m);
    cout << endl;
    if(n < m) {
        findIntersection(b, m, a, n);
    } else {
        findIntersection(a, n, b, m);
    }
    return 0;
}
