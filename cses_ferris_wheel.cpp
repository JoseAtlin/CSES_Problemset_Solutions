#include <bits/stdc++.h> 
using namespace std;

int main() {
	long long n,w,i,j;
	cin >> n >> w;
	vector<long long> a(n);
	for (i=0;i<n;i++) {
		cin >> a[i];
	}
	
	int c = 0;
	sort(a.begin(), a.end());
	i=0, j=n-1;
	while (i<=j) {
		if (a[i]+a[j] <= w) {
			c += 1;
			i += 1;
			j -= 1;
		}
		else {
			j -= 1;
			c += 1;
		}
	}
	
	cout << c;
}
