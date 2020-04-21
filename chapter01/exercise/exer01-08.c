#include <stdio.h>

int main()
{
	int blank_count = 0;
	int tab_count = 0;
	int newlines_count = 0;

	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			blank_count++;
		if(c == '\t')
			tab_count++;
		if(c == '\n')
			newlines_count++;
	}
	printf("blank: %d\ntab: %d\nnewlines: %d\n", blank_count, tab_count, newlines_count);
}
