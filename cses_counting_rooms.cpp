#include <bits/stdc++.h>
using namespace std;

const int MxN = 1e3;
int n, m;
char ch[MxN][MxN];

bool check(int x, int y) {
	if (x >= 0 && x < n && y >= 0 && y < m && ch[x][y] == '.') return true;
	else return false;
}

void dfs(int x, int y) {
	ch[x][y] = '#';
	if (check(x+1, y)) dfs(x+1, y);
	if (check(x-1, y)) dfs(x-1, y);
	if (check(x, y+1)) dfs(x, y+1);
	if (check(x, y-1)) dfs(x, y-1);
}

int main() {
	cin >> n >> m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> ch[i][j];
		
	int room = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (check(i, j)) {
				dfs(i, j);
				room += 1;
			}
		}
	}
	
	cout << room << "\n";
}