#include<stdio.h>
int main()
{
int num =9361,a,b,c,d;
int temp =num;
d=num%10;   //d=1
num=num/10; //num=936
c=num%10;   //c=6
num=num/10; //num=93
b=num%10;  //b=3
num=num/10;  //num=9
a=num;

printf("%d %d %d %d\n",a,b,c,d);

printf("%d=%d+%d+%d+%d\n",temp,a*1000,b*100,c*10,d);

printf("%d %d %d %d\n",d,c,b,a);









return 0;
}
