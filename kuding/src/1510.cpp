#include <cstdio> // c++ ������ stdio
#include <cctype> // isdigit
using namespace std;

// a[i][0] : �й�, a[i][1~16] : �ٹ�����
// 
int a[8][17];
// ans[i] : i�� �л��� ��ġ�� �ο���
int ans[8];
char line[100];
bool flag;
int max; // �� �л��� �ε���

int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int n, k;

	//input
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i][0]);
		fgets(line, 100, stdin); //gets ��Ⱥο��� �� ��õ��
		k = 0; // scanf()�� �ϰ� ���� ù���ڴ� �����̱� ������ k=0���� ����
		flag = 1;
		for (int j = 0; line[j]; j++) {
			if (isdigit(line[j]) && flag) { // ������ ������ ���ͼ� �б⸦ �������Ѿ� �ϴ� ���
				k++;
				//k�� �̿��� �б⸦ �����ϰ� line[j]-'0'�� �̿��� �ð��� ����
				a[i][(line[j] - '0') + (k - 1) * 4] = 1;
				flag = 0;
			}
			else if (isdigit(line[j])) { // �б�� �״���� ���
				a[i][(line[j] - '0') + (k - 1) * 4] = 1;
			}
			else if (line[j] == ' ') { // ������ ���� ���
				flag = 1;
			}
			else // ������ ���� ���
				continue;
		}
	}

	// proc
	// �ٹ��� ��ġ�� ������ ���� ���������ش�
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			for (k = 1; k <= 16; k++) {
				if (a[i][k] && a[j][k]) { // �Ѵ� 1�϶� ��ģ��
					ans[i]++;
					ans[j]++;
					break;
				}
			}
		}
	}

	// i�� ��ġ�� �ο��� �� ũ�ų�, ��ġ�� �ο��� ���� �� �й��� �� ���� ���
	for (int i = 1; i <= n; i++)
		if (ans[max] < ans[i] || (ans[max] == ans[i] && a[max][0] > a[i][0])) {
			max = i;
		}

	//output
	printf("%d", max);
	return 0;
}