#include<stdio.h>
void char_fun(char,int);
int main()

{
	char ch;
	int n;
	printf("Enter a character : ");
	scanf("%c",&ch);
	printf("Enter a number : ");
	scanf("%d",&n);
	char_fun(ch,n);
	return 0;
}
void char_fun(char ch,int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("%c\t",ch);
	}
}
