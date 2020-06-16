#include <bits/stdc++.h>
using namespace std;

#define ll long

ll modExp(ll base,ll exp,ll mod)  
{  
	ll res = 1; 
	base = base % mod;   
	if (base == 0) return 0;
	while (exp > 0)  
	{  
		if (exp & 1)  
			res = (res*base) % mod;  
		exp = exp>>1;
		base = (base*base) % mod;  
	}  
	return res;
}  

int main() {
	ll n;
	cin >> n;
	ll MOD = 1e9 + 7;
	ll ans = modExp(2, n, MOD);
	cout << ans;
}
