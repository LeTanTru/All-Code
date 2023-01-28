#include <bits/stdc++.h>
using namespace std;

void solve(char c[]) {
	int r;
	if(strlen(c) == 1)
		r = (c[0] - '0') % 4;
	else {
		r = ((c[strlen(c) - 2] - '0') * 10) + c[strlen(c) - 1] - '0';
		r %= 4;
	}
	if(r == 0)
		cout << 4;
	else cout << 0;

}

int main() {
	char c[10005];
	cin >> c;
	solve(c);
	return 0;
}
