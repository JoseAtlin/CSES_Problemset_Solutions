#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,i;
	cin >> n;
	long long a[n];
	for (i=0;i<n;i++) {
		cin >> a[i];
	}
	
	long long dp[n];
	dp[0] = a[0];
	for (i=1;i<n;i++) {
		dp[i] = max(a[i], dp[i-1] + a[i]);
	}
	
	cout << *max_element(dp, dp+n);
}
