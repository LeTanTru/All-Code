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
void xoaTrung(char c[]) {
    for(int i = 0; i < strlen(c); i++) {
        if(c[i] == ' ' && c[i + 1] == ' ') {
            for(int j = i + 1; j < strlen(c); j++) {
                c[j] = c[j + 1];
            }
            --i;
        }
    }
    if(c[0] == ' ') {
        for(int i = 0; i < strlen(c); i++) {
            c[i] = c[i + 1];
        }
    }
    c[strlen(c)] = '\0';
}

void chuanHoa(char c[]) {
    c[0] = toupper(c[0]);
    for(int i = 1; i < strlen(c); i++) {
        if(c[i] == ' ') {
            c[i + 1] = toupper(c[i + 1]);
        }
    }
}

int main() {
    fast();
    char c[1000];
    cin.getline(c, 1000);
    strlwr(c);
    xoaTrung(c);
    chuanHoa(c);
    cout << c;
    return 0;
}
