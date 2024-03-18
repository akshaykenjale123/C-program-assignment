#include<stdio.h>
int fibonacci(int ,int , int);
int main()
{
	int a,b,n,result;
	printf("Enter a number for fibonacci : ");
	scanf("%d",&n);

	printf("Enter a two number: ");
	scanf("%d %d",&a,&b);

	fibonacci(a,b,n);

	return 0;

}

int fibonacci(int a,int b,int n)
{
int result;
	for(int i=1;i<=n;i++)
	{
	 result=a+b;
     printf("%d\t",result);
     a=b;
	 b=result;
	}


}
