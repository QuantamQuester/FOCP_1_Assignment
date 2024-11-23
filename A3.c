//Simple Calculator
#include <stdio.h>
#include <math.h>

void display() 
{
    printf("Simple Calculator\n");
    printf("-----------------------\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic values\n");
    printf("6. Square root\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

int main() 
{
    int choice;
    float num1, num2, result;

    do 
    {
        display();
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %f\n", result);
                break;

            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %f\n", result);
                break;

            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %f\n", result);
                break;

            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) 
                {
                    result = num1 / num2;
                    printf("Result: %f\n", result);
                } 
                else 
                {
                    printf("Error: Division by zero is not allowed\n");
                }
                break;

            case 5: // Logarithmic values
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 > 0) 
                {
                    result = log(num1);
                    printf("Result (logarithm base e): %f\n", result);
                } 
                else 
                {
                    printf("Error: Logarithm of non-positive numbers is undefined.\n");
                }
                break;

            case 6: // Square root
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 >= 0) 
                {
                    result = sqrt(num1);
                    printf("Result (square root): %f\n", result);
                } 
                else 
                {
                    printf("Error: Square root of negative numbers is undefined.\n");
                }
                break;

            case 7: // Exit
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    }
    while (choice != 7);

    return 0;
}
