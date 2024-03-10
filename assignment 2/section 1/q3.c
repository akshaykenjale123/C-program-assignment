#include<stdio.h>
int main()
{
int a;
printf("enter the value");
scanf("%d", &a);
if(a>0)
{
printf("the positive number");
}
else if(a<0)
{
printf("the negative number");
}
else
{
printf("zero");
}

return 0;
}
