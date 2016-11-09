#include <cstdio>
#include <vector>

using namespace std;

int main(){
	int n, m, cur, dir = 1, x = -1, y = 0; // dir 방향 확인용
	int ans_x, ans_y, find;
	scanf("%d%d", &n, &find);
	cur = n*n;
	m = n; // n값 기억용

	vector<vector<int> >v(n, vector<int>(n)); // int v[n][n] 선언이라고 생각하면 됩니다.
	for (int i = 0; i < n; i++){
		v[++x][y] = cur--;
		if (v[x][y] == find){
			ans_x = x + 1;
			ans_y = y + 1;
		}
	}
	while (--n){
		if (dir){ // 우상 방향
			for (int i = 0; i < n; i++){
				v[x][++y] = cur--;
				if (v[x][y] == find){
					ans_x = x + 1;
					ans_y = y + 1;
				}
			}
			for (int i = 0; i < n; i++){
				v[--x][y] = cur--;
				if (v[x][y] == find){
					ans_x = x + 1;
					ans_y = y + 1;
				}
			}
		}
		else{ // 좌하 방향
			for (int i = 0; i < n; i++){
				v[x][--y] = cur--;
				if (v[x][y] == find){
					ans_x = x + 1;
					ans_y = y + 1;
				}
			}
			for (int i = 0; i < n; i++){
				v[++x][y] = cur--;
				if (v[x][y] == find){
					ans_x = x + 1;
					ans_y = y + 1;
				}
			}
		}
		dir = !dir; // 0 <--> 1 전환
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++)
			printf("%d ", v[i][j]);
		puts("");
	}
	printf("%d %d", ans_x, ans_y);
	return 0;
}