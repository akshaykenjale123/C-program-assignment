#include <stdio.h>


void print_Binary(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary representation of %d is: ", num);
    print_Binary(num);
    printf("\n");

    return 0;
}

// Function to print binary representation using recursion
void print_Binary(int n) 
{
    
    if (n == 0) 
    {
        printf("0");
        return;
    }

    print_Binary(n / 2);
    printf("%d", n % 2);
}

