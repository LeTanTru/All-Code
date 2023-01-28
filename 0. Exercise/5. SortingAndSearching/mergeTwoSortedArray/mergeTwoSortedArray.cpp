#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

void merge(int a[], int n, int b[], int m) {
    vector<string> vstr;
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(a[i] < b[j]) {
            vstr.pb("b" + to_string(i + 1));
            i++;
        } else {
            vstr.pb("c" + to_string(j + 1));
            j++;
        }
    }
    while(i < n) {
        vstr.pb("n" + to_string(i + 1));
        i++;
    }
    while(j < m) {
        vstr.pb("c" + to_string(j + 1));
        j++;
    }
    for(string x : vstr) {
        cout << x << " ";
    }
}

int main() {
    fast();
    int n, m; cin >> n >> m;
    int a[105], b[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    merge(a, n, b, m);
    return 0;
}

/*
4 4
1 1 2 3
2 3 4 5
*/