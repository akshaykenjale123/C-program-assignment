#include<stdio.h>


int main()
{

char i,j,n;
printf("enter the element");
scanf("%c",&n);
for (i=65;i<=n;i++)
  {
    for(j=65;j<=i;j++)
    {
    	printf("A");
    }
	printf("\n");
  }
	return 0;
}

