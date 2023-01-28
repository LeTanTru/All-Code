#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(); cout.tie(); }      
#define ll long long

int main() {
    fast();
    int n; cin >> n;
    int a[1005];
    int res = -1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++) mp[a[i]]++;
    for(auto it : mp) {
        if(it.second == 2) {
            res = it.first;
            break;
        }
    }
    cout << res;
    return 0;
}