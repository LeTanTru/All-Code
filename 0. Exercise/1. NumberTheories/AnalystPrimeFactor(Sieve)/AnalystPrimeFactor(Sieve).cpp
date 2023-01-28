#include <bits/stdc++.h>
using namespace std;

int prime[100001];
void sieve() {
	//Find min divisor
	for(int i = 1; i <= 100000; i++)
		prime[i] = i;
	for(int i = 2; i <= sqrt(100000); i++) {
		if(prime[i] == i) {
			for(int j = i * i; j <= 100000; j += i) {
				if(prime[j] == j) {
					prime[j] = i;
				}
			}
		}
	}
}

void solve(int n) {
	while(n != 1) {
		int cnt = 0;
		int tmp = prime[n];//tmp=min divisor of n
		while(n % tmp == 0) {
			++cnt;
			n /= tmp;// decrease n
		}
		cout << tmp << "(" << cnt << ") ";
	}
	cout << endl;
}

int main() {
	sieve();
	int t; cin >> t;
	for(int i = 1; i <= t; i++) {
		int n; cin >> n;
		cout << "#TC" << i << ": ";
		solve(n);
	}
	return 0;
}
