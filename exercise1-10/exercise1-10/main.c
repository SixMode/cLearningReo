#include <stdio.h>

int main()
{
    int c;
    int null;
    
    while ((c = getchar()) != EOF)
    {
        null = 0; //set this to 1 in if statements to prevent tabs, backspaces and
        if (c == '\t') // \\ from printing as they appear in strings
        {
            putchar('\\');
            putchar('t');
            null = 1;
        }
        if (c == '\b')
        {
            putchar('\\');
            putchar('\b'); //can't get the backspace escape sequence to print
            null = 1;      //when pressing backspace???
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
            null = 1;
        }
        if (null != 1)
        {
            putchar(c);
        }
    }
    
    return 0;
}
