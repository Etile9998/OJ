#include <cstdio>

int main() {
	int n, student, apple, sum=0;

	scanf("%d", &n);
	while (n--) {
		scanf("%d%d", &student, &apple);
		sum += apple%student;
	}
	printf("%d", sum);
	return 0;
}