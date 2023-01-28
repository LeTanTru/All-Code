#include<bits/stdc++.h>
using namespace std;
// https://oj.luyencode.net/problem/MCAKE
int main() {
    int n, k; cin >> n >> k;
    int p[k + 1] = {0};//Tạo 1 mảng để đánh dấu
    int thucTe = 0, duKien = 0;
    while(n--) {
        int a, b; cin >> a >> b;
        int cnt = 0;//đếm số ô theo thực tế
        duKien = max(duKien, b - a + 1);//tìm được số ô theo dự kiến
        for(int i = a; i <= b; i++) {
            if(p[i] == 0) {
                p[i] = 1;//Nếu chưa bị lớp nào chiếm thì đánh dấu nó là của lớp hiện tại
                ++cnt;//tăng biến đêm xem được bao nhiêu ô
            }
        }
        thucTe = max(thucTe, cnt);
    }
    cout << duKien << " " << thucTe;
    return 0;
}