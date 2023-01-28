#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

void partition(int a[], int l, int r) {
    int pivot = a[r];
    int i = l - 1;
    for(int j = l; j < r; j++) {
        if(a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[r]);
    for(int i = 0; i <= r; i++) {
        if(a[i] == pivot) {
            cout << "[" << a[i] << "]" << " ";
        } else {
            cout << a[i] << " ";
        }
    }
}

int main() {
    fast();
    int n; cin >> n;
    int a[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    partition(a, 0, n - 1);
    return 0;
}