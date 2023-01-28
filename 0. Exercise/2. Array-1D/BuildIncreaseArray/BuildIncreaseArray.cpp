#include <bits/stdc++.h>
using namespace std;
#define db double
#define fl float
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define endl "\n"
#define in(n) cin >> n
#define out(n) cout << n
#define out_endl(n) cout << n << endl
#define out_space(n) cout << n << " "
#define FOR_IN(n, a)            \
    for (int i = 0; i < n; i++) \
        in(a[i]);
#define FOR_OUT(n, a)           \
    for (int i = 0; i < n; i++) \
        out(a[i]);
using ll = long long;

int a[10000005] = {0};
int main() {
    int t;
    in(t);
    while(t--) {
        int n;
        in(n);
        FOR_IN(n, a);
        ll steps = 0;
        for(int i = 1; i < n; i++) {
            if(a[i] < a[i - 1]) {
                steps += a[i - 1] - a[i];
                a[i] = a[i - 1];
            }
        }
        out_endl(steps);
    }
    return 0;
}
