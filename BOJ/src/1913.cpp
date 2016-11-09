#include <cstdio>
#include <vector>

using namespace std;

int main(){
	int n, m, cur, dir = 1, x = -1, y = 0; // dir ���� Ȯ�ο�
	int ans_x, ans_y, find;
	scanf("%d%d", &n, &find);
	cur = n*n;
	m = n; // n�� ����

	vector<vector<int> >v(n, vector<int>(n)); // int v[n][n] �����̶�� �����ϸ� �˴ϴ�.
	for (int i = 0; i < n; i++){
		v[++x][y] = cur--;
		if (v[x][y] == find){
			ans_x = x + 1;
			ans_y = y + 1;
		}
	}
	while (--n){
		if (dir){ // ��� ����
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
		else{ // ���� ����
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
		dir = !dir; // 0 <--> 1 ��ȯ
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++)
			printf("%d ", v[i][j]);
		puts("");
	}
	printf("%d %d", ans_x, ans_y);
	return 0;
}