#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

void insertionSort(int a[], int n) {
    cout << "Buoc 0: " << a[0] << endl;
    for(int i = 1; i < n; i++) {
        int x = a[i];
        int pos = i - 1;
        while(pos >= 0 && x < a[pos]) {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    fast();
    int n; cin >> n;
    int a[105];
    srand(time(NULL));
    for(int i = 0; i < n; i++) a[i] = rand() % 100;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    insertionSort(a, n);
    return 0;
}