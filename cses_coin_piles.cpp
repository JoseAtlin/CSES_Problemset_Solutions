#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i,a,b;
	cin >> t;
	for (i=0;i<t;i++) {
		cin >> a >> b;
		if ((2*a - b) >= 0 && (2*a - b)%3 == 0 && (2*b - a) >= 0 && (2*b - a)%3 == 0) {
			cout << "YES\n";
		}
		else {
			cout <<"NO\n";
		}
	}
}
