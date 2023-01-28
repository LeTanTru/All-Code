#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vll vector<long long>
#define vstr vector<string> 
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define endl "\n"

string mul(string a, string b) {
    int len1 = a.size();
    int len2 = b.size();
    int len = len1 + len2;
    vi v1, v2;
    for(int i = 0; i < len1; i++) {
        v1.pb(a[i] - '0');
    }
    for(int i = 0; i < len2; i++) {
        v2.pb(b[i] - '0');
    }
    vector<vector<int>> res(len2);
    int index = 0;
    for(int i = len2 - 1; i >= 0; i--) {
        int t = 0;
        while(t < index) {
            res[index].pb(0);
            t++;
        }
        int carry = 0, tmp = 0;
        for(int j = len1 - 1; j >= 0; j--) {
            tmp = v1[j] * v2[i] + carry;
            res[index].pb(tmp % 10);
            carry = tmp / 10;
        }
        if(carry > 0) {
            res[index].pb(carry);
        }
        while(res[index].size() < len) {
            res[index].pb(0);
        }
        reverse(res[index].begin(), res[index].end());
        index++;
    }
    // for(int i = 0; i < res.size(); i++) {
    //     for(int j = 0; j < res.size(); j++) {
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int carry = 0;
    string ans = "";
    for(int j = res[0].size() - 1; j >= 0; j--) {
        int tmp = carry;
        for(int i = 0; i < res.size(); i++) {
            tmp += res[i][j];
        }
        ans = to_string(tmp % 10) + ans;
        carry = tmp / 10;
    }
    if(carry > 0) {
        ans = to_string(carry) + ans;
    }
    while(ans[0] == '0') {
        ans.erase(ans.begin());
    }
    return ans;
}

int main() {
    fast();
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if(a == "0" || b == "0") {
        cout << 0;
    } else cout << mul(a, b);
    return 0;
}