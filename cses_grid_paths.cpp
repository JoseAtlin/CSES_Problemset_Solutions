#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;
int dp[1001][1001];

int main() {
	ll n,i,j;
	cin >> n;
	dp[1][1] = 1;
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			char temp;
			cin >> temp;
			if (temp == '.')
				dp[i][j] += (dp[i-1][j] + dp[i][j-1]) % mod;
			else dp[i][j] = 0;
		}
	}
	
	cout << dp[n][n];
}
