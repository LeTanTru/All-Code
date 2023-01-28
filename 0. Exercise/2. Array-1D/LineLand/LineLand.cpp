#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl "\n"
using ll = long long;
#define fast() {ios_base::sync_with_stdio(false);cin.tie(); cout.tie();}
//tach theo dau getline(ss, tmp, '.')
int main() {
    fast();
    int n; cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << a[i + 1] - a[i] << " " << a[n - 1] - a[i] << endl;
        } else if(i == n - 1) {
            cout << a[i] - a[i - 1] << " " << a[i] - a[0] << endl;
        } else {
            cout << min(a[i] - a[i - 1], a[i + 1] - a[i]) << " " << max(a[i] - a[0], a[n - 1] - a[i]) << endl;
        }
    }
    return 0;
}