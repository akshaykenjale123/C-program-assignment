#include<stdio.h>



int calculate(int num1, int num2, int *pmulti)
{
	int sum = num1 + num2;
	*pmulti = num1 * num2;
	return sum;
}


int main(void)
{
	int num1 = 10, num2 = 20, sum, multi;

	sum = calculate(num1, num2, &multi);
	
	printf("num1 = %d, num2 = %d\n", num1, num2);

	printf("sum = %d\n", sum);
	printf("multi = %d\n", multi);
	return 0;
}
