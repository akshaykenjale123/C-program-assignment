#include<stdio.h>
int addition(int ,int);
int substraction(int ,int);
int multiplication(int,int);
int division(int,int);
int main()
{
	int a,b,add,sub,mul,div;
	char ch;
	printf("Enter first number :");
	scanf("%d",&a);

	printf("Enter a operator : ");
	scanf("%*c%c",&ch);

	printf("Enter second number : ");
	scanf("%d",&b);

	if(ch == '+')
	{
		add=addition(a,b);
		printf("The addition is %d",add);
	}
	else if(ch == '-')
	{
		sub=substraction(a,b);
		printf("The substraction is %d",sub);
	}

	else if(ch == '*')
	{
		mul=multiplication(a,b);
		printf("%d",mul);

	}
	else if(ch == '/')
	{
		if(b==0)
		{
			printf("Denominator zero");
		}
		else
		{
			div = division(a,b);
			printf("%d",div);
		}
	}

	else
	{
      printf("Invalid Operator : ");
	}
	return 0;

}

int addition(int a,int b)
{
	return a+b;
}


int substraction(int a,int b)
{

	return a-b;

}

int multiplication(int a,int b)
{

	return a*b;

}

int division(int a,int b)
{

	return a/b;
}
