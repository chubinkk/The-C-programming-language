#include <stdio.h>

int main()
{
   /*initializes c and inspace. */
    int c;
    int inspace;

    /*sets inspace = 0*/
    inspace = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            if(inspace == 0)
            {
                inspace = 1;
                putchar(c);
				printf("\n");
            }
        }

        if(c != ' ')
        {
            inspace = 0;
            putchar(c);
        }
    }

    return 0;
}
