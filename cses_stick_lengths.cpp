#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,i,input,avg,sum=0;
	cin >> n;
	vector<long long> a;
	while (cin >> input) {
		a.push_back(input);
	}
	
	sort(a.begin(), a.end());
	avg = a[n/2];
	for (i=0;i<n;i++) {
		sum += abs(a[i]-avg);
	}
	cout << sum;
}
