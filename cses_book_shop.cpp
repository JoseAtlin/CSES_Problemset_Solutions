#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll dp[100001];									// uses less memory and hence no runtime error

int main() {
	ll n,x,i,j;
	cin >> n >> x;
	ll a[n], pages[n];
	for (i=0;i<n;i++) cin >> a[i];
	for (i=0;i<n;i++) cin >> pages[i];
	
	
	for (i=0;i<n;i++) {
		for (j=x;j>=a[i];j--) {
				dp[j] = max(dp[j], dp[j-a[i]]+pages[i]);
		}
	}
	
	cout << dp[x];
}

/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll dp[1001][100001];								//produces runtime error in online judges

int main() {
	ll n,x,i,j;
	cin >> n >> x;
	ll a[n+1], pages[n+1];
	for (i=1;i<=n;i++) cin >> a[i];
	for (i=1;i<=n;i++) cin >> pages[i];
	
	
	for (i=1;i<=n;i++) {
		for (j=1;j<=x;j++) {
			if (j>=a[i]) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]]+pages[i]);
			}
			else dp[i][j] = dp[i-1][j];
		}
	}
	
	cout << dp[n][x];
}
*/
