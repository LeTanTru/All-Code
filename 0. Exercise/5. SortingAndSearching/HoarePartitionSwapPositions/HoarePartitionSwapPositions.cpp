#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

void partition(int a[], int l, int r) {
    int i = l, j = r;
    int x = a[r];
    while(i <= j) {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j) {
            swap(a[i], a[j]);
            if(i != j) {
                cout << i + 1 << " " << j + 1 << endl;
            }
            i++, j--;
        }
    }
    if(l < j) partition(a, l, j);
    if(i < r) partition(a, i, r);
}

int main() {
    fast();
    int n; cin >> n;
    int a[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    partition(a, 0, n - 1);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}