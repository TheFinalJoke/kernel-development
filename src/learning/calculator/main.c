# include <stdio.h>

int main() { 
    printf("Calculator started.\n");

    float firstNum = 0.0f;
    float secondNum = 0.0f;
    char operator = '\0';

    printf("Enter first number: ");
    scanf("%f", &firstNum);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &secondNum);

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", firstNum + secondNum);
            break;
        case '-':
            printf("Result: %.2f\n", firstNum - secondNum);
            break;
        case '*':
            printf("Result: %.2f\n", firstNum * secondNum);
            break;
        case '/':
            if (secondNum != 0.0f) {
                printf("Result: %.2f\n", firstNum / secondNum);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    return 0;
}