#include <cstdio> // c++ 에서의 stdio
#include <cctype> // isdigit
using namespace std;

// a[i][0] : 학번, a[i][1~16] : 근무여부
// 
int a[8][17];
// ans[i] : i번 학생과 겹치는 인원수
int ans[8];
char line[100];
bool flag;
int max; // 답 학생의 인덱스

int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int n, k;

	//input
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i][0]);
		fgets(line, 100, stdin); //gets 행안부에서 안 추천함
		k = 0; // scanf()를 하고 난뒤 첫글자는 공백이기 때문에 k=0부터 시작
		flag = 1;
		for (int j = 0; line[j]; j++) {
			if (isdigit(line[j]) && flag) { // 이전에 공백이 나와서 학기를 증가시켜야 하는 경우
				k++;
				//k를 이용해 학기를 구분하고 line[j]-'0'을 이용해 시간을 구분
				a[i][(line[j] - '0') + (k - 1) * 4] = 1;
				flag = 0;
			}
			else if (isdigit(line[j])) { // 학기는 그대로인 경우
				a[i][(line[j] - '0') + (k - 1) * 4] = 1;
			}
			else if (line[j] == ' ') { // 공백이 나온 경우
				flag = 1;
			}
			else // 반점이 나온 경우
				continue;
		}
	}

	// proc
	// 근무가 겹치면 서로의 값을 증가시켜준다
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			for (k = 1; k <= 16; k++) {
				if (a[i][k] && a[j][k]) { // 둘다 1일때 겹친다
					ans[i]++;
					ans[j]++;
					break;
				}
			}
		}
	}

	// i의 겹치는 인원이 더 크거나, 겹치는 인원이 같을 시 학번이 더 작은 경우
	for (int i = 1; i <= n; i++)
		if (ans[max] < ans[i] || (ans[max] == ans[i] && a[max][0] > a[i][0])) {
			max = i;
		}

	//output
	printf("%d", max);
	return 0;
}