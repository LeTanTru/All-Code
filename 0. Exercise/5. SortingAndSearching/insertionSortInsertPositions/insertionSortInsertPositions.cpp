#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

void insertionSort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int x = a[i];
        int pos = i - 1;
        while(pos >= 0 && x < a[pos]) {
            a[pos + 1] = a[pos];
            pos--;
        }
        cout << x << ' ' << pos + 1 << endl;
        a[pos + 1] = x;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    fast();
    int n; cin >> n;
    int a[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    insertionSort(a, n);
    return 0;
}