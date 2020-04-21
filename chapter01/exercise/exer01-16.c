#include <stdio.h>
#define	MAXLINE 1000

int get_line (char line[], int maxline);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
	{	
		if (len > max)
		{
			max = len;
			printf("= = = = = > max_length: %d\n", max);
		}
	}
	return 0;
}

int get_line (char s[], int lim)
{
	int c, line_length;
	
	for (line_length=0 ; line_length<lim-1 && (c = getchar())!= EOF && c!='\n'; ++line_length)
		s[line_length] = c;
	
	if (c == '\n')
	{
		s[line_length] = c;
	}

	s[line_length]= '\0';
	
	printf("= = = = = > line_length:%d\n", line_length);

	return line_length;
}
