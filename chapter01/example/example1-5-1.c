#include <stdio.h>

int main()
{
	char c;

	c = getchar();

	while ((c = getchar()) != EOF)
//	while (c != EOF)
	{
		putchar (c);
//		c = getchar();
		printf("%d\n", c);
	}
}
