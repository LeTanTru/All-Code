#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back


// https://www.youtube.com/watch?v=o11f2d7q_Ew&list=PLux-_phi0Rz0Hq9fDP4TlOulBl8APKp79&index=31&ab_channel=28tech
// 36:27
int main() {
    fast();
    int n, m;
    cin >> n >> m;
    int a[105], b[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            i++;
        } else {
            cnt++;
            i++, j++;
        }
    }
    cout << cnt << endl;
    return 0;
}