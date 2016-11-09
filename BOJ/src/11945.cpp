#include <cstdio>

int main(){
	int arr[10][10];
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &arr[i][j]);

	for (int i = 0; i < n; i++){
		for (int j = m - 1; j >= 0; j--)
			printf("%d", arr[i][j]);
		printf("\n");
	}
	return 0;
}