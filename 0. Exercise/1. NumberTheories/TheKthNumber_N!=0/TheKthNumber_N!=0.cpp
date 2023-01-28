#include <bits/stdc++.h>
using namespace std;

#define ll long long
int solve(int n, int k) {
	int x = k / (n - 1);
	int r = k % (n - 1);
	if(r == 0)
		return x * n - 1;
	return x * n + r;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		cout << solve(n, k) << endl;
	}
	return 0;
}
