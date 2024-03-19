#include <stdio.h>

void sum_And_Multiplication(int num1, int num2, int *sum, int *multi) 
{
    *sum = num1 + num2;
    *multi = num1 * num2;
}

int main() {
    int num1, num2, sum, multi;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    sum_And_Multiplication(num1, num2, &sum, &multi);
    
    printf("Sum = %d\n", sum);
    printf("Multi= %d\n", multi);
    
    return 0;
}

