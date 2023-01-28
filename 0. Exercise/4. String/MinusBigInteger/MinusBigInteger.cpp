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

//tach theo dau getline(ss, tmp, '.')

void sub(string a, string b) {
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;
    int ok = 0;
    if(a < b) {
        a.swap(b);
        ok = 1;
    }
    int carry = 0;
    string res = "";
    int len = a.size() - 1;
    for(int i = len; i >= 0; i--) {
        int tmp = (a[i] - '0') - (b[i] - '0') - carry;
        if(tmp < 0) {
            res += char(tmp + 10 + '0');
            carry = 1;
        } else {
            res += char(tmp + '0');
            carry = 0;
        }
    }
    if(carry) {
        res += char(carry);
    }
    reverse(res.begin(), res.end());
    while(res[0] == '0') {
        res.erase(res.begin());
    }
    if(ok) {
        res = '-' + res;
    }
    if(res.empty()) {
        cout << 0;
    } else {
        cout << res;
    }
}

int main() {
    fast();
    string a, b;
    getline(cin, a);
    getline(cin, b);
    sub(a, b);
    return 0;
}
