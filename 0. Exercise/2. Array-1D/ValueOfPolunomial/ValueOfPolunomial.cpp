#include <bits/stdc++.h>
using namespace std;

// a0 *x ^ (n - 1) + a1 * x ^ (n - 2) + ... + 1
int main() {
	int t;
	cin >> t;
	while(t--) {
		int x, n, *array;
		int sum = 0;
		cin >> n >> x;
		array = new int(n);
		for(int i = 0; i < n; i++) {
			cin >> array[i];
		}
		for(int i = 0; i < n; i++) {
			sum += (array[n - i - 1] * pow(x, n - 1 - i));
		}
		cout << sum << endl;
	}
	return 0;
}
