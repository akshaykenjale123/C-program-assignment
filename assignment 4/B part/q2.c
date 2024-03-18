#include <stdio.h>

int power(int base, int index);

int main() {
    int base, index;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter index: ");
    scanf("%d", &index);

    printf("%d^%d is %d\n", base, index, power(base, index));

    return 0;
}

// Function to calculate power using recursion
int power(int base, int index) {
    
    if (index == 0)
        return 1;
    // Recursive case: base^index = base * base^(index-1)
    else
        return base * power(base,index - 1);
}

