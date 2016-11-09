#include <iostream>
using namespace std;

int main() {
	int i, j, max = 0;
	int ar[4][6];
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			cin >> ar[i][j];
	for (i = 0; i < 4; i++)
		ar[i][5] = 300 * ar[i][0] + 100 * ar[i][1] + 10 * ar[i][3] + ar[i][4];


	for (i = 0; i < 4; i++)
		if (ar[max][5] <= ar[i][5])
			max = i;
	cout << max + 1 << endl;
	ar[max][5] = 0;
	for (i = 0; i < 4; i++)
		if (ar[max][5] <= ar[i][5])
			max = i;
	cout << max + 1;
	return 0;
}