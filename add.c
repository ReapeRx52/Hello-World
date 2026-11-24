#include <stdio.h>
// zum compelieren folgen Sie dem befehl: gcc add.c -o add
int main(void) {
	int x;
	int y;
	int sum;
	int rem;// remainder
	float div;
	printf("Geben Sie die erste ganze Zahl ein: ");
	scanf("%d", &x);
	printf("Geben Sie die zweite ganze Zahl ein: ");
	scanf("%d", &y);

	sum = x + y;
	rem = x % y;
	div = (float)x / (float)y;
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("sum=%d\n", sum);
	printf("x/y=%.2f\n", div);
	printf("x%%y:%d\n",rem);

	div = x / y;
    printf("x/y=%.2f\n", div);
	return 0;
}
