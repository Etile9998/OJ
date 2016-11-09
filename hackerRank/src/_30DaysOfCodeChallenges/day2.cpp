#include <cstdio>
#include <cmath>
int main() {
	double mealCost;
	int tipPercent;
	int taxPercent;
	
	scanf("%lf\n%d\n%d", &mealCost, &tipPercent, &taxPercent);
	double totalCost = mealCost + mealCost*tipPercent/100+ mealCost*taxPercent/100;
	printf("The total meal cost is %.lf dollars.", round(totalCost));
	return 0;
}