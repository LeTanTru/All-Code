#include <bits/stdc++.h>
using namespace std;

int solve(int n, int p) {
	int deg = 0;
	for(int i = 2; i <= n; i++) {
		int tmp = i;
		if(tmp % p == 0) {
			while(tmp % p == 0) {
				++deg;
				tmp /= p;
			}
		}
	}
	return deg;
}

int solve2(int n, int p) {
	int deg;
	// deg = [n / p] + [n / p * p] + ... + [n / pow(p, n)]
	for(int i = p; i <= n; i *= p) {
		deg += n / i;
	}
	return deg;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n, p; cin >> n >> p;
		cout << solve(n, p) << " " << solve2(n, p) << endl;
	}
	return 0;
}
