#include <bits/stdc++.h>
using namespace std;
#define fast() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }      
#define ll long long
#define endl "\n"
#define pb push_back

int binarySearch(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(a[mid] == x) return 1;
        else if(x < a[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return 0;
}

int firstPos(int a[], int n, int x) {
    int l = 0, r = n - 1, res = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(a[mid] == x) {
            res = mid + 1;
            r = mid - 1; // Continue searching left part to check if res is not first position
        } else if(a[mid] > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int lastPos(int a[], int n, int x) {
    int l = 0, r = n - 1, res = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(a[mid] == x) {
            res = mid + 1;
            l = mid + 1; // Continue searching left part to check if res is not first position
        } else if(a[mid] > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int countFrequency(int a[], int n, int x) {
    int fP = firstPos(a, n, x);
    int lP = lastPos(a, n, x);
    return lP - fP + 1;
}

int main() {
    // fast();
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int a[105];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << countFrequency(a, n, x) << endl;
    }
    return 0;
}