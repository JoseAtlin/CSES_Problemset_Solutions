#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,target,i,j;
	cin >> n >> target;
	int a[n];
	for (i=0;i<n;i++) cin >> a[i];
	int dp[target+1];
	dp[0] = 0;
	
	for (i=1;i<=target;i++) {
		dp[i] = 1e9;
		for (j=0;j<n;j++) {
			if (i>=a[j]) {
				dp[i] = min(dp[i], dp[i-a[j]]+1);
			}
		}
	}
	if (dp[target]>=1e9) cout << -1;
	else cout << dp[target];
}
