#include <bits/stdc++.h>
using namespace std;

const int mxn = 2e5;
bool a[mxn];

int main() {
	int n,temp;
	cin >> n;
	a[n] = 0;
	for (int i=1;i<n;i++) {
		cin >> temp;
		a[temp] = 1;
	}
	
	for (int i=1;i<=n;i++) {
		if (a[i] == 0) {
			cout << i;
			break;
		}
	}
}
