#include <stdio.h>

int main ()
{
    char s[100]="Holberton School is the best";
    char *ptr;
    ptr = &s[0];
    int word = 0;
    while (*ptr != '\0')
    { 
        if (*ptr ==' ')
        {
        word = word + 1;
        
        }
        *ptr++;
    }
    word++;
    printf ("%d",word);
}
