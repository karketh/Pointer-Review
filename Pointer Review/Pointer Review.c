#include <stdio.h>

int main() {
	int a = 5;
	int *b = &a;
	int** c = &b;
	printf("%d\n", **c);
	**c = 2;
	printf("%d", a);

	return 0;
}