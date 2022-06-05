#include <stdio.h>
int main()
{
int num;
printf("Enter a numer: ");
scanf("%d", &num);
if (num & 1 == 1)
printf("%d is odd.", num);
else
printf("%d is even.", num);
return 0;
}