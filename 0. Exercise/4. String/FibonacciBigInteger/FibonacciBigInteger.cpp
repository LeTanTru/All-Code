#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b) {
    if(a.size() < b.size())
        swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    // b += string(a.size() - b.size(), '0');
    while(a.size() < b.size()) a += '0';
    while(b.size() < a.size()) b += '0';
    string res = "";
    int carry = 0;
    for(int i = 0; i < a.size(); i++)
    {
        int tmp = (a[i] - '0' + b[i] - '0' + carry);
        res += char(tmp % 10 + '0');
        carry = tmp / 10;
    }
    if(carry) res += char(carry + '0');
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    string f[10001];
    f[0] = "1", f[1] = "1";
    int n; cin >> n;
    for(int i = 2; i <= 10000; i++) {
        f[i] = sum(f[i - 1], f[i - 2]);
    }
    for(int i = 0; i < n; i++) {
        int t; cin >> t;
        cout << f[t] << endl;
    }
    return 0;
}