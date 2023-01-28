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

int main() {
    fast();
    int n; cin >> n;
    int a[505];
    FOR_IN(n * n, a);
    int res[505][505];
    int i = 0, j = 0, k = 0;
    while(i < n * n) {
        while(j < n) {
            res[i][j] = a[k];
            j++;
            k++;
        }
        k--;
        if(j == n) {
            i++;
        }
        while(j >= 0) {
            res[i][j] = a[k];
            j--;
            k++;
        }
        k--;
        if(j == -1) {
            i++;
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    //Dong chan in tu trai sang phai, dong le in tu phai sang trai
    return 0;
}
// 4
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16