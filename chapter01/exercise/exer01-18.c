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
			printf("max: %d\n", max);
		}
	}
	return 0;
}

int get_line (char s[], int lim)
{
	int c, line_length;
	int count = 0;

	for (line_length=0 ; line_length<lim-1 && (c = getchar())!= EOF && c!='\n'; ++line_length)
	{
		if (c == '\t' || c == ' ')
			count ++;		
		else
			s[line_length] = c;
	}
	line_length = line_length - count;

	if (c == '\n')
		s[line_length]=c;

	s[line_length]= '\0';
	
	printf("line_length:%d\n", line_length);

	return line_length;
}
