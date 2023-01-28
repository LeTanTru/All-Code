#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define vi vector<int>
#define vll vector<long long>
#define vstr vector<string>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define endl "\n"
#define FOR_IN(n,a) for(int i=0;i<n;i++)  cin>>a[i]
#define FOR_INT_2(m, n, a) for(int i=0;i<m;i++){for(int j=0;j<n;j++){cin>>a[i][j];}}
using ll = long long;
inline int ctoi(char c) { return c - '0'; }
//tach theo dau getline(ss, tmp, '.')
void xoa(int a[], int &n, int pos) {
    for(int i = pos; i < n; i++) {
        a[i] = a[i + 1];
    }
    --n;
}

void xoaTrung(int a[], int &n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                xoa(a, n, j);
                --j;
            }
        }
    }
}

int main() {
    fast();
    int a[100];
    int n; cin >> n;
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 20;
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    xoaTrung(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
