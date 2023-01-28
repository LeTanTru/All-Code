#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long

int main() {
	fast();
	ll n; cin >> n;
	if(n % 2 == 0)
		cout << n / 2;
	else cout << (-n - 1) / 2;
	return 0;
}