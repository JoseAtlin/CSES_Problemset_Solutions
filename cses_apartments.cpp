#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,d,i,j;
	cin >> n >> m >> d;
	vector<long long> a(n);
	vector<long long> b(m);
	for (i=0;i<n;i++)
		cin >> a[i];
	for (i=0;i<m;i++)	
		cin >> b[i];
	
	int c = 0;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (i=0,j=0;i<n && j<m;) {
		if (a[i]+d >= b[j] && a[i]-d <= b[j]) {
			c += 1;
			i += 1;
			j += 1;
		}
		if (a[i]+d < b[j]) {
			i += 1;
		}
		else if (a[i]-d > b[j]){
			j += 1;
		}
	}
	
	cout << c;
}
