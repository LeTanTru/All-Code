#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

int n, m, a[105][105];

int max_area(int x[]) {
    int res = 0;
    int i = 0;
    stack<int> st;
    while(i < m) {
        if(st.empty() || x[i] >= x[st.top()]) st.push(i++);
        else {
            int top = st.top(); st.pop();
            if(st.empty()) {
                res = max(res, i * x[top]);
            } else {
                res = max(res, x[top] * (i - st.top() - 1));
            }
        }
    }
    while(!st.empty()) {
        int top = st.top(); st.pop();
        if(st.empty()) {
            res = max(res, i * x[top]);
        } else {
            res = max(res, i * (i - st.top() - 1));
        }
    }
    return res;
}

void nhap(int a[][105], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

int main() {
    fast();
    cin >> n >> m;
    nhap(a, n, m);
    int tmp[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i == 0) {
                tmp[i][j] = a[i][j];
            } else if(a[i][j]) {
                tmp[i][j] = tmp[i - 1][j] + 1;
            } else {
                tmp[i][j] = 0;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans = max(ans, max_area(tmp[i]));
    }
    cout << ans << endl;
    return 0;
}