#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i;
	cin >> n;
	if (n == 1) {	
		cout << 1;
	}
	else if (n <= 3) {
		cout << "NO SOLUTION";
	}
	else {
		for (i=2;i<=n;i+=2) {
			cout << i << " ";
		}
		for (i=1;i<=n;i+=2) {
			cout << i << " ";
		}
	}
}
