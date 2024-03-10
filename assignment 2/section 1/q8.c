#include <stdio.h>

int main() {
    
    const float unitPrice = 5.0;
    const int discountThreshold1 = 30;
    const int discountThreshold2 = 50;
    const float discount1 = 0.10; // 10%
    const float discount2 = 0.15; // 15%

    
    int quantity;
    float totalPrice;

    
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    
    if (quantity <= 0) {
        printf("Invalid quantity. Please enter a valid quantity.\n");
        return 1; 
    } else if (quantity >= discountThreshold2) {
        
        totalPrice = quantity * unitPrice * (1 - discount2);
    } else if (quantity >= discountThreshold1) {
        
        totalPrice = quantity * unitPrice * (1 - discount1);
    } else {
        
        totalPrice = quantity * unitPrice;
    }

    
    printf("Total price: Rs %.2f\n", totalPrice);

    return 0; 
}
