#include<stdio.h>
int main()
{
int a,rev=0,temp,digit;
printf("enter five digit number:");
scanf("%d",&a);

temp=a;
while(a!=0)
{
digit=a%10;
rev=rev*10+digit;
a=a/10;
}
if(temp == rev)
{
printf("the value is palindrome");
}
else
{
printf("the value is not palindrome");
}




return 0;
}
