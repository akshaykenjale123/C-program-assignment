#include <stdio.h>


int gcd(int a, int b);

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    
    if (b == 0)
        return a;
    // Recursive case: GCD(a, b) = GCD(b, a % b)
    else
        return gcd(b, a % b);
}

