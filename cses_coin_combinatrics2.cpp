#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9 + 7, mx = 1e6+1;
ll dp[mx];


int main() {
	ll n,target,i,j;
	cin >> n >> target;
	int a[n];
	for (i=0;i<n;i++) cin >> a[i];
	dp[0] = 1;
	
	for (j=0;j<n;j++) {
		for (i=1;i<=target;i++) {
			if (i>=a[j]) {
				dp[i] = (dp[i]+dp[i-a[j]]) % mod;
			}
		}
	}
	cout << dp[target];
}
