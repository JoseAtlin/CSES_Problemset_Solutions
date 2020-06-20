#include<bits/stdc++.h>
using namespace std;

const int mxn = 2e5;
#define ll long long
ll a[mxn];

int main() {
	ll n,i,c=0;
	cin >> n;
	for (i=0;i<n;i++) cin >> a[i];
	for (i=1;i<n;i++) {
		if (a[i-1] > a[i]) {
			ll temp = (a[i-1] - a[i]);
			c += temp;
			a[i] = a[i-1];
		}
	}
	
	cout << c;
}
