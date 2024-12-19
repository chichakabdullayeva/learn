#include <stdio.h>

int main ()
{
 char a [100]= "race";
 char b [100] = "care";
 char *ptr;
 char *arr;
 ptr = &a[0];
 arr = &b[0];
 int n = 0;
 int m = 0;
 int d = 0;
 while (*ptr != '\0')
 {
     n = n +1;
     *ptr++;
 }
 while (*arr != '\0')
 {
     m = m +1;
     *arr++;
 }
 if (n != m)
 {
    printf ("This is not anagram");
 }
 else
 {
     while (*arr != '\0')
     {
         while (*ptr!= '\0')
         {
             if (*arr == *ptr)
             {
                d = d +1; 
             }
             *ptr++;
         }
         *arr++;
     }
     if (d == n)
     {
         printf ("This is anagram");
     }
     else
     {
         printf ("This is not anagram");
     }
     printf ("%d",n);
     printf("%d",m);
     printf ("%d",d);
 }
}
