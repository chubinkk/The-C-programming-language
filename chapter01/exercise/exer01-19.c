#include <stdio.h>
#define	MAXLINE 1000

int get_line (char line[], int maxline);
void copy (char to[], char from[]);

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
			copy (longest, line);
			printf("max: %d\nlongest: %s\n", max, longest);
		}
	}
	if (max > 0)
		printf("%s\n", longest);
	
	return 0;
}

int get_line (char s[], int lim)
{
	int c, line_length;
	for (line_length=0 ; line_length<lim-1 && (c = getchar())!= EOF && c!='\n'; ++line_length)
		s[line_length] = c;
	if (c == '\n')
	{
		s[line_length]=c;
//		++i;
	}

	s[line_length]= '\0';
	
	printf("line_length:%d\n", line_length);

	return line_length;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;

	while (to[i] = from[i] != '\0')
		++i;
}
