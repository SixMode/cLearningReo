#include <stdio.h>

int main()
{
    int c, nl, blank, tabs;
    
    nl = 0;
    blank = 0;
    tabs = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++blank;
        else if (c == '\t')
            ++tabs;
    }
    
    printf(" Lines: %d\n Spaces: %d\n Tabs: %d\n", nl, blank, tabs);
    
    return 0;
}
