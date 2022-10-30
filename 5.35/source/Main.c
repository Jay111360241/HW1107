#include <stdlib.h>
#include <stdio.h>

int Fi(int);

int main(void)
{
	int i, t;
	scanf("%d", &t);
	for (i = 0; i <= t; i++)
	{
		printf("Fi[%d]= %d\n", i, Fi(i));
	}


	system("pause");
	return 0;
}

Fi(int t)
{
	int a, b, c, i;
	if (t == 0)
		return 0;
	if (t <= 2)
		return 1;
	a = 1;
	b = 1;
	c = 0;
	for (i = 3; i <= t; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}