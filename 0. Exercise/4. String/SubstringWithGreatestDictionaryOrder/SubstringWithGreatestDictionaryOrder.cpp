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

int main() {
    fast();
    string s;
    getline(cin, s);
    int pos = 0, n = s.size();
    while(pos < n) {
        char tmp = s[pos];
        int lastPos = pos;
        for(int i = pos; i < n; i++) {
            if(s[i] > tmp) {
                tmp = s[i];
            }
        }
        for(int i = pos; i < n; i++) {
            if(s[i] == tmp) {
                cout << s[i];
                lastPos = i;
            }
        }
        pos = lastPos + 1;
    }
    return 0;
}

// abbcbccacbbcbaaba
