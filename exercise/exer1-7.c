#include <stdio.h>

int main()
{
	int c;

	if (c = getchar() != EOF)
	{
		printf("%d\n", c);
	}
	else
		printf("%d\n", EOF);
}
