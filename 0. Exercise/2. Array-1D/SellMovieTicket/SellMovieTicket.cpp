#include <bits/stdc++.h>
using namespace std;

int solve(int n, int a[]) {
	//Per ticket costs 25 cent
	//Per person has bill among 25 cent, 50 cent, 100 cent
	int c25 = 0, c50 = 0;
	for(int i = 0; i < n; i++) {
		//If has person pay 25 cent then increase 25 cent quantity
		if(a[i] == 25) ++c25;
		else if(a[i] == 50) {//person pay 50 cent 
			if(c25 == 0) {//If has person pay 50 cent for the first time and 25 cent quantity is 
				return 0;
			}
			//If has person pay 50 cent from the second time and 25 cent quantity is 1
			--c25;//Decrease 25 cent quantity
			++c50;//Increase 50 cent quantity
		} else {//Condition for using 100 cent to pay for 25 cent
			if(c25 == 0 || (c25 * 25 + c50 * 50) < 75) {
				return 0;
			}
			if(c50 != 0) {
				--c25;
				--c50;
			} else {
				c25 -= 3;
			}
		}
	}
	return 1;
}

int main(s) {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	solve(n, a) ? cout << "YES" : cout << "NO";
	return 0;
}
