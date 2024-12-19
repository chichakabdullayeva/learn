#include <stdio.h>

int main ()
{
    int a [100]= {1,24,35,12,1,7};
    int *arr;
arr = &a[0];
int n = 0;
int sum = 0;
float avarage;
while (n<6)
{
sum = sum + *arr;
n = n +1;
*arr++;
}
float sum1 = (float)sum;
float n1 = (float) n ;
avarage = sum1/n1;
printf ("%f\n",avarage);
}
