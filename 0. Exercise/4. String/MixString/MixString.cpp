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

void solve(int n, string s1, string s2, string s) {
    string tmp1 = s1;
    string tmp2 = s2;
    string tmp3 = "";
    int ok, res = 0;
    while(1) {
        for(int i = 0; i < n; i++) {
            tmp3 += tmp2[i];
            tmp3 += tmp1[i];
        }
        tmp1.clear();
        tmp2.clear();
        for(int i = 0; i < n; i++) {
            tmp1 += tmp3[i];
        }
        for(int i = tmp3.size() / 2; i < n + tmp3.size() / 2; i++) {
            tmp2 += tmp3[i];
        }
        tmp3[2 * n] = '\0';
        if(tmp3 != s) {
            res++;
        } else {
            break;
        }
        if(tmp1 == s1 || tmp2 == s2) {
            ok = 0;
            break;
        }
        tmp3.clear();
    }
    if(tmp3 == s) {
        cout << res + 1;
    }
    if(!ok) {
        cout << -1;
    }
}

void mix(char s1[], char s2[], char s12[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        s12[j++] = s2[i];
        s12[j++] = s1[i];
    }
    s12[j] = '\0';
}

void split(char s1[], char s2[], char s12[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) s2[i] = s12[j++];
    for(int i = 0; i < n; i++) s1[i] = s12[j++];
}

int solve2(char s1[], char s2[], char s12[], int n) {
    char tmp1[n], tmp2[n], tmp[2 * n + 5];
    strcpy(tmp1, s1);
    strcpy(tmp2, s2);
    int cnt = 0;
    while(1) {
        ++cnt;
        mix(s1, s2, tmp, n);
        if(strcmp(s12, tmp) == 0) {
            return cnt;
        }
        split(s1, s2, tmp, n);
        if(!strcmp(s1, tmp1) && !strcmp(s2, tmp2)) {
            break;
        }
    }
    return -1;
}
/*
1
4
AHAH
HAHA
HHAAAAHH

1
3
123
456
123456
*/

/*
Given string s1, s2 with len n, s with len 2 * n
Let string s12, first char of s12 is first char of s2 and second is s1 and repeate until s12 equal to s, then return times to make it
if cann't equal return -1

123
456
->415263
*/

int main() {
    // fast();
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        int n; cin >> n;
        // cin.ignore();
        // string s1, s2, s;
        // getline(cin, s1);
        // getline(cin, s2);
        // getline(cin, s);
        // solve(n, s1, s2, s);
        cin.ignore();
        char s1[100], s2[100], s12[2 * 100 + 5];
        cin.getline(s1, 100);
        cin.getline(s2, 100);
        cin.getline(s12, 100);
        cout << solve2(s1, s2, s12, n);
    }
    return 0;
}
