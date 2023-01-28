#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll rev(ll n) {
	ll rev = 0;
	while(n) {
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;
}

void solve1(ll n) {
	int start = rev(n) % 10;
	int end = n % 10;
	if(start != 2 * end && end != 2 * start) {
		cout << "NO" << endl;
		return;
	}

	if(end == 2 * start) {
		n -= start;
		if(rev(n) == n)
			cout << "YES";
		else cout << "NO";
	} else if(start == 2 * end) {
		n += end;
		if(rev(n) == n)
			cout << "YES";
		else cout << "NO";
	}
	cout << endl;
}


int solve2(char c[]) {
	int start = c[0] - '0', end = c[strlen(c) - 1] - '0';
	if(start != 2 * end && end != 2 * start)
		return 0;
	int l = 1, r = strlen(c) - 2;
	while(l < r) {
		if(c[l] != c[r])
			return 0;
		++l;
		--r;
	}
	return 1;
}

int main(int argc, char **argv) {
	int t; cin >> t;
	while(t--) {
		//		ll n;cin>>n;
		char c[20];
		cin >> c;
		if(solve2(c))
			cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
