#include <cstdio>
#include <random>

int main(){
	std::random_device rd;
	printf("%d\n", rd() % 9800 + 101);
}