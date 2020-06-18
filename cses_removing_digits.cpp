#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mx = 1e6+1, mxn = 1e9;
ll dp[mx];

int main() {
	int n,i,j,temp;
	cin >> n;
	
	for (i=1;i<=n;i++) {
		dp[i] = mxn;
		j = i;
		while (j!=0) {
			temp = j%10;
			dp[i] = min(dp[i], dp[i-temp]+1);
			j /= 10;
		}
	}
	
	cout << dp[n];
}
