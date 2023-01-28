#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

ll gcd(ll a, ll b) {
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

ll solve(int x, int y, int z, int n) {
	ll tmp = (ll)lcm(lcm(x, y), z);
	ll m = (ll)pow(10, n - 1);
	ll res = (m + tmp - 1) / tmp * tmp;
	if(res < (ll)pow(10, n)) {
		return res;
	}
	return -1;
}

int main() {
	fast();
	int x, y, z, n; cin >> x >> y >> z >> n;
	cout << solve(x, y, z, n);
	return 0;
}