#include <stdio.h>
int main() {
int arr [6]={1,24,35,12,1,7};
int *ptr;
int k = arr[0];
for (int i = 0;i<6;i++)
{
if (arr[i]>k)
{
        k= arr[i];
}
}
ptr = &k;
printf ("%p",ptr);
printf("%d",*ptr);
}
