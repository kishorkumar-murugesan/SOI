#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operations
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // Handle division case
    if (num2 != 0) {
        printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
