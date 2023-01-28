#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i <= r; ++i)
#define FOD(i, l, r) for(int i = l; i >= r; --i)

#define ll long long
#define ug unsigned long long

using namespace std;
// Topic variable.
ll	ax, ay, bx, by,
cx, cy, dx, dy;
// Auxiliary variable.

//___________________
ll max4(int h, int i, int e, int u) {
    return max(h, max(i, max(e, u)));
}

ll min4(int h, int i, int e, int u) {
    return min(h, min(i, min(e, u)));
}
void solve() {
    ll 	L = abs(ax - bx) + abs(cx - dx) - (max4(ax, bx, cx, dx) - min4(ax, bx, cx, dx));
    ll	R = abs(ay - by) + abs(cy - dy) - (max4(ay, by, cy, dy) - min4(ay, by, cy, dy));
    if(L <= 0 || R <= 0) cout << 0;
    else cout << L * R;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> ax >> ay >> bx >> by;
    cin >> cx >> cy >> dx >> dy;
    solve();
    return 0;
}
// https://oj.luyencode.net/problem/HCNV2