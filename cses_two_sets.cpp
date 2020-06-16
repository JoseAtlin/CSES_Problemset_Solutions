#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i;
	cin >> n;
	vector<int> a;
	vector<int> b;
	cin >> n;
	if (!(n&1)) {
		if (n%4 == 0) {
			for (i=1;i<=n;i++) {
				if (i<=n/4 || i>(n-(n/4))) {
					a.push_back(i);
				}
				else {
					b.push_back(i);
				}
			}
			cout << "YES\n" << a.size() << "\n";
			for (i=0;i<a.size();i++) {
				cout << a[i] << " ";
			}
			cout << "\n" << b.size() << "\n"; 
			for (i=0;i<b.size();i++) {
				cout << b[i] << " ";
			}
		}
		else {
			cout << "NO";
		}
	}
	else {
		if ((n-3)%4 == 0) {
			int flag = 0, c= 0;
			for (i=1;i<=n;i++) {
				if (flag == 0) {
					a.push_back(i);
					c += 1;
				}
				else {
					b.push_back(i);
					c += 1;
				}
				if (c%4 == 0) {
					flag = 0;
				}
				else if (c%2 == 0) {
					flag = 1;
				}
			}
			cout << "YES\n" << a.size() << "\n";
			for (i=0;i<a.size();i++) {
				cout << a[i] << " ";
			}
			cout << "\n" << b.size() << "\n"; 
			for (i=0;i<b.size();i++) {
				cout << b[i] << " ";
			}
			
		}
		else {
			cout << "NO";
		}
	}
}
