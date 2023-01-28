#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

void bubbleSort(int a[], int n) {
    for(int i = 0; i < n; i++) {
        int ok = 0;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j + 1], a[j]);
                ok = 1;
            }
        }
        if(ok) {
            cout << "Buoc " << i + 1 << ": ";
            for(int k = 0; k < n; k++) {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    fast();
    int n; cin >> n;
    int a[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    bubbleSort(a, n);
    return 0;
}