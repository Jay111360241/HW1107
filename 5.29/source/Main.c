#include <stdlib.h>
#include <stdio.h>

int lcm(int, int);

int main(void)
{
	int a, b;
	printf("Input two integers:");
	scanf("%d %d", &a, &b);
	printf("The numbers' LCM is = %d", lcm(a,b));
	system("pause");
	return 0;
}

int lcm(int a, int b)
{
	int i, max;
	for (i = 1; i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
		}
	}
	return max;
}