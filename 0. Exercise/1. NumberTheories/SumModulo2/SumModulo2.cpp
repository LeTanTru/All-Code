#include <bits/stdc++.h>
using namespace std;

#define ll long long

// check if sigma(i%K) with i = 1 -> N is equal K
int solve1(int n, ll k) {
	int sum = 0;
	for(int i = 0; i <= n; i++)
		sum += i % k;
	return sum == k;
}

int solve2(int n, ll k) {
	int x = n / k;// times of residual phrases repeats
	int r = n % k;// rest residual 
	ll sum1 = (k - 1) * k / 2; // sum residual from 1 to k - 1
	ll sum2 = r * (r + 1) / 2; // sum residual from 1 to r
	return (sum1 * x + sum2) == k;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n; ll k; cin >> n >> k;
		cout << solve1(n, k) << " " << solve2(n, k) << endl;
	}
	return 0;
}
