#include <stdlib.h>
#include <stdio.h>

int power(int, int);

int main(void)
{
	int a, b;
	printf("Input base and exponent:");
	scanf("%d %d", &a, &b);
	printf("ans = %d\n", power(a, b));
	system("pause");
	return 0;
}

int power(int a, int b)
{
	int t = 1, i;
	for (i = 1; i <= b; i++)
	{
		t = t * a;
	}
	return t;
}