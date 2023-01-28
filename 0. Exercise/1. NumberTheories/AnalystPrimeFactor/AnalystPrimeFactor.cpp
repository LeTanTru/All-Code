#include <bits/stdc++.h>
using namespace std;

void solve1(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		while(n % i == 0) {
			cout << i << " ";
			n /= i;
		}
	}
	if(n != 1)
		cout << n;
}

void solve2(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			cout << i << " ";
			while(n % i == 0) {
				n /= i;
			}
		}
	}
	if(n != 1)
		cout << n;
}

void solve3(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		int cnt = 0;
		if(n % i == 0) {
			while(n % i == 0) {
				++cnt;
				n /= i;
			}
			cout << i << "(" << cnt << ") ";
		}
	}
	if(n != 1)
		cout << n << "(1)";
}

void solve4(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			while(n % i == 0) {
				cout << i;
				n /= i;
				if(n != 1)
					cout << "x";
			}
		}
	}
	if(n != 1)
		cout << n;
}

void solve5(int n) {
	cout << n << "=";
	for(int i = 2; i <= sqrt(n); i++) {
		int cnt = 0;
		if(n % i == 0) {
			while(n % i == 0) {
				++cnt;
				n /= i;
			}
			cout << i << "^" << cnt;
			if(n != 1)
				cout << "*";
		}
	}
	if(n != 1)
		cout << n << "^1";
}

int main(int argc, char **argv) {
	int n; cin >> n;
	solve1(n);
	cout << endl;
	solve2(n);
	cout << endl;
	solve3(n);
	cout << endl;
	solve4(n);
	cout << endl;
	solve5(n);
	return 0;
}
