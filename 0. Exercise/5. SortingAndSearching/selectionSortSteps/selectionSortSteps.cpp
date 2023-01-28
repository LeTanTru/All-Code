#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

void selectionSort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int m = i;
        for(int j = i + 1; j < n; j++) {
            if(a[m] > a[j]) {
                m = j;
            }
        }
        swap(a[i], a[m]);
        cout << "Buoc " << i + 1 << ": ";
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    fast();
    int n; cin >> n;
    int a[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    selectionSort(a, n);
    return 0;
}