#include <cstdio>

long long D[30][30];

void prec() {
	for (int i = 1; i < 30; i++)
		for (int j = 1; j <= i; j++) {
			if (i == j)
				D[i][j] = 1;
			else if (j == 1)
				D[i][j] = i;
			else
				D[i][j] = D[i - 1][j - 1] + D[i - 1][j];
		}
}

int main() {
	int t, row, col;
	prec();
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d%d", &col, &row);
		printf("%lld\n", D[row][col]);
	}
	return 0;
}