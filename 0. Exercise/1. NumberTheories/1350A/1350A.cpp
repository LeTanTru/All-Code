#include <bits/stdc++.h>
using namespace std;

#define ll long long

int find(int n) {
	for(int i = 2; i <= n; i++) {
		if(n % i == 0)
			return i;
	}
}

int find2(int n) {
	for(int i = 3; i <= n; i += 2) {
		if(n % i == 0)
			return i;
	}
}

void solve(ll n, int k) {
	for(int i = 1; i <= k; i++) {
		n += find(n);
	}
	cout << n << endl;
}

void solve2(ll n, int k) {
	if(n % 2 == 0)
		cout << n + 2 * k;
	else cout << n + find2(n) + (k - 1) * 2;
	cout << endl;
}

// n >= 2
// f(n) = smallest divisor of n except 1
// add f(n) to n exactly k times

// https://codeforces.com/problemset/problem/1350/A
int main(int argc, char **argv) {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		solve2(n, k);
	}
	return 0;
}
