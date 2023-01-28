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

int isDivisibleFor8(string s) {
    int n = s.size();
    int num = ctoi(s[n - 3]) * 100 + ctoi(s[n - 2]) * 10 + ctoi(s[n - 1]);
    return num % 8 == 0;
}

int isDivisibleFor25(string s) {
    int n = s.size();
    int num = ctoi(s[n - 2]) * 10 + ctoi(s[n - 1]);
    return num % 25 == 0;
}

int isDivisibleFor2And3And5(string s) {
    int n = s.size();
    int isDivisbleFor2 = ctoi(s[n - 1]) % 2;
    int isDivisbleFor5 = ctoi(s[n - 1]) % 5;
    int sumDigit = 0;
    for(int i = 0; i < n; i++) {
        sumDigit += ctoi(s[i]);
    }
    int isDivisbleFor3 = sumDigit % 3;
    return isDivisbleFor2 == 0 && isDivisbleFor3 == 0 && isDivisbleFor5 == 0;
}

int main() {
    // fast();
    string s;
    getline(cin, s);
    cout << isDivisibleFor8(s) << endl;
    cout << isDivisibleFor25(s) << endl;
    cout << isDivisibleFor2And3And5(s) << endl;
    return 0;
}
