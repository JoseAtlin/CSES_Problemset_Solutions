#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7, mx = 1e6+1;
ll dp[mx];

int main() {
	int n,i,j; 
	cin >> n;
	dp[0] = 1;
	for (i=1;i<=n;i++) {
		for (j=1;j<=6;j++) {
			if (i>=j) {
				dp[i] = (dp[i]+dp[i-j])%mod;
			}
		}
	}
	
	cout << dp[n];
}
