#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	printf("Input:");
	scanf("%c", &a);
	printf("%c\n", a + 32);

	system("pause");
	return 0;
}