#include<stdio.h>
int main()
{
int num,i=1;
printf("enter the number :");
scanf("%d",&num);


while(i<=num)
{
  if (num % i==0)
{
printf("%d\n",i);
}
i++;

}
return 0;
}













