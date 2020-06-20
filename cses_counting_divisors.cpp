#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
	int c, i;
	if (n != 1) c = 2;
	else c = 1;
	for (i=2;i<=sqrt(n);i++) {
		if (n%i==0) {
			c += 1;
			if (i != n/i) c += 1;
		}
	}
	return c;
}

int main() {
	int t,n,i;
	cin >> t;
	for (i=0;i<t;i++){
		cin >> n;
		cout << solve(n) << "\n";
	}
}
