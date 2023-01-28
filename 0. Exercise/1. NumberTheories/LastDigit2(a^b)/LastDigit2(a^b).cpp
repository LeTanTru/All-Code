#include <bits/stdc++.h>
using namespace std;

#define ll long long
int powMod(int a, int b) {
	a %= 10;
	int res = 1;
	while(b) {
		if(b % 2 == 1) {
			res *= a;
			res %= 10;
		}
		a *= a;
		a %= 10;
		b /= 2;
	}
	return res;
}

int main() {
	int a, b; cin >> a >> b;
	cout << powMod(a, b);
	return 0;
}
