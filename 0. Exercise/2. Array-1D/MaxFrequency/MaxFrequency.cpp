#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

int main() {
    fast();
    int n; cin >> n;
    int a[1005];
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int res = -1e9;
    for(int i = 0; i < n; i++) {
        res = max(res, mp[a[i]]);
    }
    for(int i = 0; i < n; i++) {
        if(mp[a[i]] == res) {
            cout << a[i];
            mp[a[i]] = 0;
            if(i != n - 1) {
                cout << " ";
            }
        }
    }
    return 0;
}