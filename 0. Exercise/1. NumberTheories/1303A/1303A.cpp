#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back
int main() {
    fast();
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        char c[1000];
        cin.getline(c, 1000);
        int idx = -1, res = 0;
        for(int i = 0; i < strlen(c); i++) {
            if(c[i] == '1') {
                if(idx == -1) idx = i;
                else {
                    res += i - idx - 1;
                    idx = i;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}