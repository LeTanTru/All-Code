#include <bits/stdc++.h>
using namespace std;

int nt(long long n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}

int p[100];
void init() {
	int i = 0, cnt = 0;
	while(cnt < 100) {
		if(nt(i)) {
			p[cnt] = i;
			++cnt;
		}
		++i;
	}
}

int main(int argc, char **argv) {
	init();
	int a[1000][1000];
	int n; cin >> n;
	int r1 = 0, r2 = n - 1, c1 = 0, c2 = n - 1, cnt = 0;
	while(r1 <= r2 && c1 <= c2) {
		for(int i = c1; i <= c2; i++) {
			a[r1][i] = p[cnt];
			++cnt;
		}
		++r1;
		for(int i = r1; i <= r2; i++) {
			a[i][c2] = p[cnt];
			++cnt;
		}
		--c2;
		if(c1 <= c2) {
			for(int i = c2; i >= c1; i--) {
				a[r2][i] = p[cnt];
				++cnt;
			}
			--r2;
		}
		if(r1 <= r2) {
			for(int i = r2; i >= r1; i--) {
				a[i][c1] = p[cnt];
				++cnt;
			}
			++c1;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << setw(2) << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
