#include<stdio.h>
int main()
{
int base,index,power=1;
printf("Enter base and index : ");
scanf("%d %d", &base, &index);
	
	for(int i = 1 ; i <= index ; i++)
		{ 
		power =power * base;
                 
	        }

            printf("%d ^ %d = %d\n", base, index, power);
	
	return 0;

}
