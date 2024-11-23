//Assignment 1
//Check Whether a Number is an Armstrong Number
#include <stdio.h>
#include <math.h>

int main() 
{
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0) 
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}










//Find HCF of Two Numbers
#include <stdio.h>

int main() 
{
    int num1, num2, i, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}










//Subtract Two Integers Without Using Minus Operator
#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    int subtract = a + (~b + 1); 

    printf("The result of %d - %d is: %d\n", a, b, subtract);

    return 0;
}










//Swap Two Numbers Using Four Methods

//Using a Third Variable
#include <stdio.h>

int main() 
{
    int x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

// Using Addition and Subtraction
#include <stdio.h>

int main() 
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

//Using Multiplication and Division
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    x = x * y;
    y = x / y;
    x = x / y;

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

// Using Bitwise XOR
#include <stdio.h>

int main() 
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}











//Check Whether a Number is a Perfect Number
#include <stdio.h>

int main() 
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) 
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}










//Find the Quadrant of a Point in XY Plane
#include <stdio.h>

int main() 
{
    int x, y;

    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("The point (%d, %d) lies in the First quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%d, %d) lies in the Second quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%d, %d) lies in the Third quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%d, %d) lies in the Fourth quadrant.\n", x, y);
    else
        printf("The point (%d, %d) lies on an axis.\n", x, y);

    return 0;
}










//Binary to Decimal and Decimal to Binary Conversion
#include <stdio.h>
#include <math.h>

void decimalToBinary(int num) 
{
    int binary[32], i = 0;

    while (num > 0) 
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

void binaryToDecimal(int num)
{
    int decimal = 0, base = 1, rem;

    while (num > 0) 
    {
        rem = num % 10;
        decimal += rem * base;
        base *= 2;
        num /= 10;
    }

    printf("Decimal: %d\n", decimal);
}

int main() {
    int choice, num;

    printf("Choose an option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        decimalToBinary(num);
    } 
    else if (choice == 2) 
    {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        binaryToDecimal(num);
    } 
    else 
    {
        printf("Invalid choice.\n");
    }

    return 0;
}










// Print the Pattern
#include <stdio.h>

int main() 
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            if ((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}











//Print Pascal’s Triangle
#include <stdio.h>

int main() {
    int rows, i, j, num;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) 
    {
        num = 1; 

        
        for (j = 1; j <= rows - i; j++) 
        {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++) 
        {
            printf("%d ", num);
            num = num * (i - j) / (j + 1); 
        }

        printf("\n");
    }

    return 0;
}