#include<stdio.h>
int main()
{
int a,b,div;
printf("enter the first no:");
scanf("%d",&a);

printf("enter the second no:");
scanf("%d",&b);

if(b==0)
{
printf("not divisible");
}
else
{
div = a/b;
printf("%d",div);
}


return 0;
}
