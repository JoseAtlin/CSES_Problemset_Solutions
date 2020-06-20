#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9+7;

ll modexp(ll base, ll exp, ll mod) {
	ll res = 1;
	base %= mod;
	if (exp == 0) return 1;
	if (base == 0) return 0;
	while (exp > 0) {
		if (exp & 1) res = (res*base) % mod;
		exp = exp >> 1;
		base = (base*base) % mod;
	}
	
	return res;
}

int main() {
	int t;
	cin >> t;
	for (int i=0;i<t;i++) {
		ll a,b,c;
		cin >> a >> b >> c;
		b = modexp(b, c, mod-1);
		cout << modexp(a, b, mod) << "\n";
	}
}
