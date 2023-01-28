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
inline int ctoi(char c) {return c-'0';}
//tach theo dau getline(ss, tmp, '.')
int solve(string s, ll k){
    ll res=0;
    for(int i=0;i<s.size();i++){
        res=(res*10+ctoi(s[i]))%k;
    }
    return res;
}

int main(){
    fast();
    string s;
    getline(cin, s);
    ll k;
    cin>>k;
    cout<<solve(s, k);
    return 0;
}
