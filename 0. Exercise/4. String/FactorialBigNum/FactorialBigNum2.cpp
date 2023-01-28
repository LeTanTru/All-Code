#include <bits/stdc++.h>
using namespace std;

int a[1000001] = {0}, n;

void factorial(int n) {
    a[0] = 1;
    int len = 1,
        q = 2,
        x = 0,
        num = 0;
    while(q <= n) {
        x = 0;
        num = 0;
        while(x < len) {
            a[x] = a[x] * q;
            a[x] = a[x] + num;
            num = a[x] / 10;
            a[x] = a[x] % 10;
            x++;
        }
        while(num) {
            a[len] = num % 10;
            num /= 10;
            len++;
        }
        q++;
    }
    len--;
    while(len >= 0) {
        cout << a[len];
        len--;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        factorial(n);
        cout << endl;
    }
    return 0;
}