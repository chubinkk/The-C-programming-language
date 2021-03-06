//As written, getint treats a + of - not followed by a digit as a valid representation of zero. Fix it to pusg such a character back on the input/

int getint (int *pn)
{
    int c, sign;

    while (isspace(c = getch()));
    if (!isdigit(c) && !=EOF && c!='+' && c!='-')
    {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1:-1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10* *pn + (c- '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
