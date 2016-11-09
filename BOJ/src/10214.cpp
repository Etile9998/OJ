#include <cstdio>

int main(){
	int t;
	scanf("%d", &t);
	for (int tc = 0; tc < t; tc++){
		int score[2] = { 0, 0 };
		int sum[2] = { 0, 0 };
		for (int i = 0; i < 9; i++){
			scanf("%d%d", &score[0], &score[1]);
			sum[0] += score[0];
			sum[1] += score[1];
		}
		if (sum[0] > sum[1])puts("Yonsei");
		else if (sum[0] == sum[1])puts("Draw");
		else puts("Korea");
	
	}
	return 0;
}