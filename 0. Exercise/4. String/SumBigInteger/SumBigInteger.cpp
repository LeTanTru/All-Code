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

int main() {
    fast();
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << sum(a, b) << endl;
    return 0;
}
