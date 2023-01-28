#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll eulerFunc(ll n) {
	//p is prime divisor of n
	//product n(1-1/p)
	ll res = n;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			while(n % i == 0) n /= i;
			res -= res / i;
		}
	}
	if(n != 1)
		res -= res / n;
	return res;
}

int main(int argc, char **argv) {
	ll n; cin >> n;
	cout << eulerFunc(n);
	return 0;
}
