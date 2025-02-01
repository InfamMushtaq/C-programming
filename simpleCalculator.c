#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %f\n", result);  // Using %f instead of %lf
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case '/':
            if (num2 != 0){
                result = num1 / num2;
                  printf("Result: %f\n", result);
            }
            else if(num2==0) {
                printf("Error! Division by zero is not allowed.\n");
                return 1;
            }
          
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}