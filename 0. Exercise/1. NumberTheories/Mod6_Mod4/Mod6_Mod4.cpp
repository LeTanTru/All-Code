#include <bits/stdc++.h>
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
int sumDigit(string s) {
    int sum = 0;
    for(int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }
    return sum;
}

int mod6(string s) {
    return (s[s.size() - 1] - '0') % 2 == 0 && sumDigit(s) % 3 == 0;
}

int mod4(string s) {
    int n = s.size() - 1;
    int last = ctoi(s[n - 1]) * 10 + ctoi(s[n]);
    return last % 4 == 0;
}

int main() {
    fast();
    string s;
    getline(cin, s);
    if(mod6(s)) {
        cout << "Mod 6 = 0";
    } else { cout << "No mod 6 = 0"; }
    cout << endl;
    if(mod4(s)) {
        cout << "Mod 4 = 0";
    } else { cout << "No mod 4 = 0"; }
    return 0;
}
