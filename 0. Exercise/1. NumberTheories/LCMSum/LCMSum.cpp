#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
ll p[1000001];
ll res[1000001];

void sieve() {
	for(int i = 1; i <= 1000000; i++) {
		p[i] = i;
	}
	for(int i = 2; i <= 1000000; i++) {
		if(p[i] == i) {
			p[i] = i - 1;
			for(int j = 2 * i; j <= 1000000; j += i) {
				p[j] -= p[j] / i;
			}
		}
	}
}

void solve() {
	for(int i = 1; i <= 1000000; i++) {
		for(int j = i; j <= 1000000; j += i) {
			res[j] += i * p[i];
		}
	}
}

int main(int argc, char **argv) {
	sieve();
	solve();
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << (res[n] + 1) * n / 2 << endl;
	}
	return 0;
}
