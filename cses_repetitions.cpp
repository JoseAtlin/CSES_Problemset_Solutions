#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	long long c=1, max_c=0;
	for (int i=0;i<s.size()-1;i++) {
		if (s[i] == s[i+1]) {
			c += 1;
		}
		else {
			if (max_c < c) {
				max_c = c;
			}
			c = 1;
		}
	}
	
	cout << max(max_c, c);
}
