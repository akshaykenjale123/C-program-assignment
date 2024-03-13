#include<stdio.h>
int main()
{
	int i,a=1,b=0,c,n;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {
	 	c=a+b;
	 	printf("%d\t",c);
	 	a=b;
	 	b=c;
	 
	 }





return 0;
}






