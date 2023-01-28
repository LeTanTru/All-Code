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
// tach theo dau getline(ss, tmp, '.')

// Get last digit of binary
// If last mod 5 = 0 -> ok, else -> not ok
// Loop end to begin
// tmp = 1 (2^0 = 1 at last bit)
// Calculate value at bit i 
// Sum = sum + (value at bit i) * tmp
// tmp is value of 2^(n - i - 1)
// get last digit of tmp
// get last digit of sum
int solve(string s) {
    int n = s.size();
    int tmp = 1, sum = 0;
    for(int i = n - 1; i >= 0; i--) {
        sum += ctoi(s[i]) * tmp;
        tmp *= 2;
        tmp %= 10;
        sum %= 10;
    }
    if(sum % 5 == 0)
        return 1;
    return 0;
}

int main() {
    fast();
    string s;
    getline(cin, s);
    cout << solve(s);
    return 0;
}
