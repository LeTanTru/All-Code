#include <bits/stdc++.h>
using namespace std;
#define db double
#define fl float
#define vi vector<int>
#define vll vector<long long>
#define vstr vector<string>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define endl "\n"
#define out(n) cout<<n
#define out_endl(n) cout<<n<<endl
#define out_space(n) cout<<n<<" "
#define FOR_IN(n,a) for(int i=0;i<n;i++)  cin>>a[i]
#define FOR_OUT(n,a) for(int i=0;i<n;i++) out_space(a[i])
using ll = long long;

//tach theo dau getline(ss, tmp, '.')
/*
I - 1
V - 5
X - 10
L - 50
C - 100
D - 500
M - 1000
*/

/*
IV - 4
IX - 9
XL - 40
XC - 90
CD - 400
CM - 900
*/
int val[] = {1, 5, 10, 50, 100, 500, 1000};
char s[] = "IVXLCDM";

int findPos(char c) {
    for(int i = 0; i < 7; i++) {
        if(s[i] == c) {
            return i;
        }
    }
}

int main() {
    fast();
    /* Solution 1
    string s;
    getline(cin, s);
    ll decNum=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='I'){
            if(s[i+1]=='V'){
                decNum+=4;
                i++;
                continue;
            } else if(s[i+1]=='X'){
                decNum+=9;
                i++;
                continue;
            } else {
                ++decNum;
            }
        }
        if(s[i]=='X'){
            if(s[i+1]=='L'){
                decNum+=40;
                i++;
                continue;
            } else if(s[i+1]=='C'){
                decNum+=90;
                i++;
                continue;
            } else {
                decNum+=10;
            }
        }
        if(s[i]=='C'){
            if(s[i+1]=='D'){
                decNum+=400;
                i++;
                continue;
            } else if(s[i+1]=='M'){
                decNum+=900;
                i++;
                continue;
            } else {
                decNum+=100;
            }
        }
        if(s[i]=='V'){
            decNum+=5;
        } else if(s[i]=='L'){
            decNum+=50;
        } else if(s[i]=='D'){
            decNum+=500;
        } else if(s[i]=='M'){
            decNum+=1000;
        }
    }
    cout<<decNum;
    */
    char c[10000];
    cin.getline(c, 10000);
    int n = strlen(c);
    int res = val[findPos(c[n - 1])];
    for(int i = n - 1; i > 0; i--) {
        int pos1 = findPos(c[i]);
        int pos2 = findPos(c[i - 1]);
        if(val[pos1] <= val[pos2]) {
            res += val[pos2];
        } else {
            res -= val[pos2];
        }
    }
    cout << res;
    return 0;
}
