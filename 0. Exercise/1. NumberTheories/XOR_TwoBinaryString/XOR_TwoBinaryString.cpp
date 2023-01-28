#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl "\n"

using ll = long long;

#define fast() {ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);}
int main() {
    fast();
    string a, b;
    cin >> a >> b;
    string res = "";
    int n = a.size();
    for(int i = 0; i < n; i++) {
        res += char((a[i] - '0') ^ (b[i] - '0') + '0');
    }
    n = 0;
    while(res[n] == '0') n++;
    for(int i = n; i < res.size(); i++) {
        cout << res[i];
    }
    return 0;
}