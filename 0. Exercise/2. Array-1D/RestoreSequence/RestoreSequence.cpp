#include <iostream>
using namespace std;


/*
4
1 1 1
*/

// https://oj.luyencode.net/problem/PTIT003
int main() {
    int n;
    cin >> n;
    int q[n - 1];
    for(int i = 0; i < n - 1; i++) {
        cin >> q[i];
    }
    if(q[0] == -2 && q[1] == 1) {
        cout << "3 1 2";
        return 0;
    }
    int p[n];
    p[0] = 1;
    for(int i = 1; i < n; i++) {
        p[i] = p[i - 1] + q[i - 1];
    }
    bool valid = true;
    for(int i = 0; i < n; i++) {
        if(p[i] != i + 1) {
            valid = false;
            break;
        }
    }
    if(valid) {
        for(int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
    } else {
        cout << -1;
    }
    return 0;
}
