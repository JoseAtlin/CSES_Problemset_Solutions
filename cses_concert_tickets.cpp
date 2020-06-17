#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {									// source : tmwillianmlin (using set)
	int n,m,i,temp;
	cin >> n >> m;
	set<array<int,2>> a;
	for (i=0;i<n;i++) {
		cin >> temp;
		a.insert({temp, i});
	}

	for (i=0;i<m;i++) {
		cin >> temp;
		auto it = a.lower_bound({temp+1, 0});
		if (it == a.begin()) {
			cout << -1 << "\n";
		}
		else {
			it--;
			cout << (*it)[0] << "\n";
			a.erase(it);
		}
	}
}

/*
My code : (using vector) :: time limit exceeded in 1 case

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	ll n,m,i,temp;
	cin >> n >> m;
	vector<ll> a(n);
	for (i=0;i<n;i++)
		cin >> a[i];
 
	sort(a.begin(), a.end());
	for (i=0;i<m;i++) {
		cin >> temp;
		auto it = lower_bound(a.begin(), a.end(), temp+1);
		if (it == a.begin()) {
			cout << -1 << "\n";
		}
		else {
			cout << a[it-a.begin()-1] << "\n";
			a.erase(a.begin()+(it-a.begin()-1));
		}
	}
}
*/
