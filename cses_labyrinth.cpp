#include <bits/stdc++.h>
using namespace std;

const int MxN = 1e3, dir_i[4] = {1, -1, 0, 0}, dir_j[4] = {0, 0, 1, -1};
const char dir[4] = {'D', 'U', 'R', 'L'};
int n, m, src_x, src_y, dest_x, dest_y;
char ch[MxN][MxN], movement[MxN][MxN];

bool check(int x, int y) {
	if (x >= 0 && x < n && y >= 0 && y < m && ch[x][y] == '.') return true;
	else return false;
}

int main() {
	cin >> n >> m;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> ch[i][j];
			if (ch[i][j] == 'A') {
				src_x = i;
				src_y = j;
			}
			if (ch[i][j] == 'B') {
				dest_x = i;
				dest_y = j;
				ch[i][j] = '.';
			}
			movement[i][j] = 0;
		}
	}
	
	queue<pair<int, int>> que;
	pair<int, int> p;
	que.push({src_x, src_y});
	while (!que.empty()) {
		p = que.front();
		que.pop();
		for (int i=0; i<4; i++) {
			int move_i = dir_i[i] + p.first, move_j = dir_j[i] + p.second;
			if (check(move_i, move_j)) {
				que.push({move_i, move_j});
				ch[move_i][move_j] = '#';
				movement[move_i][move_j] = dir[i];
			}
		}
	}
	
	if (movement[dest_x][dest_y]) {
		cout << "YES\n";
	}
	else cout << "NO\n";
}