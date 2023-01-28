#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
	if(n % 4 == 0)
		cout << 6;
	else if(n % 4 == 1)
		cout << 8;
	else if(n % 4 == 2)
		cout << 4;
	else if(n % 4 == 3)
		cout << 2;
}

int main() {
	int n; cin >> n;
	solve(n);
	return 0;
}
