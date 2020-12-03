#include <stdio.h>
//commenting this as I go to make sure I understand fully what is going on
int main()
{
    int c;
    int blank;

    blank = 0;
    while((c = getchar()) != EOF)
    {
        //check to see if user typed space, if so go into if statement
        if(c == ' ')
        {
          //check to see if blank is set to 0, if so go into if statement
          if(blank == 0)
          {
            blank = 1; //set blank to 1, so if next input is space it is not printed
            putchar(c); //set input to output, printing the character
          }
        }

       
        if(c != ' ') //if character input is not space go into if statement
        {
          blank = 0; //set blank back to zero in in case next charcater is space
          putchar(c); //print non-space character
        }
    }
    
    return 0;
}
