#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define endl "\n"
inline void FOR_IN(int n, int a[]) {
    for(int i = 0; i < n; i++)
        cin >> a[i];
}
using ll = long long;
inline int ctoi(char c) { return c - '0'; }
inline void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();
}
int isAlpha(char c) { return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'; }
int isNum(char c) { return c >= '0' && c <= '9'; }
//tach theo dau getline(ss, tmp, '.')
const int mod = 1e9 + 7;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int cmp(const void *a, const void *b) {
    char x[100], y[100], z[100], t[100];
    strcpy(x, (char *)a); strcpy(z, x);
    strcpy(y, (char *)a); strcpy(t, y);
    strcat(x, y);
    strcat(t, z);
    return strcmp(x, t);
}

int main() {
    // fast();
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        int n; cin >> n;
        cin.ignore();
        char a[n][100];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        qsort(a, n, sizeof(a[0]), cmp);
        for(int i = 0; i < n; i++) {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
