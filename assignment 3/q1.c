#include<stdio.h>
int main()
{
int num;
char c1;
printf("enter the number:");
scanf("%d",&num);
printf("enter the character:");
scanf("%*c%c",&c1);
for(int i=1;i<=num;i++)
{
printf("*");
}



return 0;
}
