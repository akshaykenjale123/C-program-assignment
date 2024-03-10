#include<stdio.h>
int main()
{
/*int a,b,c;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("enter the thitd number:");
scanf("%d",&c);

if (a>b)
{
printf("a is greater");
}

else if (b>c)
{
printf("b is greater");
}

else
{
printf("c is greater");
}

*/
int a,b,c;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("enter the third number:");
scanf("%d",&c);
if((a>b)? printf("a is greater"): (b>c)? printf("b is greater"):printf("c is greater"));
return 0;
}
