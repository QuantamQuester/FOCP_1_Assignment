//Assignment 2
//Increase Marks by 5 and Print Updated Array
#include <stdio.h>

int main() 
{
    int marks[] = {45, 67, 88, 76, 54};
    int size = sizeof(marks) / sizeof(marks[0]);

    printf("Original Marks:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", marks[i]);
    }

    for (int i = 0; i < size; i++)
    {
        marks[i] += 5;
    }

    printf("\nUpdated Marks:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", marks[i]);
    }

    return 0;
}











//Print Grades of Students Based on Marks
#include <stdio.h>

int main() 
{
    int marks[] = {85, 74, 55, 35, 40};
    int size = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < size; i++) 
    {
        if (marks[i] >= 75) 
        {
            printf("Student %d: A Grade\n", i + 1);
        } 
        else if (marks[i] >= 60) 
        {
            printf("Student %d: B Grade\n", i + 1);
        } 
        else if (marks[i] >= 40) 
        {
            printf("Student %d: C Grade\n", i + 1);
        } 
        else 
        {
            printf("Student %d: D Grade\n", i + 1);
        }
    }

    return 0;
}










//Find Who Scored First "99"
#include <stdio.h>

int main() 
{
    int marks[] = {45, 99, 67, 88, 99};
    int size = sizeof(marks) / sizeof(marks[0]);
    int found = 0;

    for (int i = 0; i < size; i++) 
    {
        if (marks[i] == 99)
        {
            printf("First '99' is scored by student %d.\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("No one scored 99.\n");
    }

    return 0;
}










//Find Who and How Many Students Scored "99"
#include <stdio.h>

int main() 
{
    int marks[] = {45, 99, 67, 99, 88};
    int size = sizeof(marks) / sizeof(marks[0]);
    int count = 0;

    for (int i = 0; i < size; i++) 
    {
        if (marks[i] == 99) 
        {
            printf("Student %d scored 99.\n", i + 1);
            count++;
        }
    }

    printf("Total students who scored 99: %d\n", count);

    return 0;
}










//Find Sum of Scores
#include <stdio.h>

int main() 
{
    int marks[] = {45, 67, 88, 76, 54};
    int size = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) 
    {
        sum += marks[i];
    }

    printf("Sum of scores: %d\n", sum);

    return 0;
}










//Find Average Score
#include <stdio.h>

int main() 
{
    int marks[] = {45, 67, 88, 76, 54};
    int size = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) 
    {
        sum += marks[i];
    }

    printf("Average score: %.2f\n", (float)sum / size);

    return 0;
}










//Check Whether Scores are Even or Odd
#include <stdio.h>

int main() 
{
    int marks[] = {45, 67, 88, 76, 54};
    int size = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < size; i++) 
    {
        if (marks[i] % 2 == 0) 
        {
            printf("Marks %d: Even\n", marks[i]);
        } 
        else 
        {
            printf("Marks %d: Odd\n", marks[i]);
        }
    }

    return 0;
}










//Find Maximum and Minimum Score
#include <stdio.h>

int main() {
    int marks[] = {45, 67, 88, 76, 54};
    int size = sizeof(marks) / sizeof(marks[0]);
    int max = marks[0], min = marks[0];

    for (int i = 1; i < size; i++) 
    {
        if (marks[i] > max) 
        {
            max = marks[i];
        }
        if (marks[i] < min) 
        {
            min = marks[i];
        }
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}










//Find a Peak Element
#include <stdio.h>

int main() 
{
    int marks[] = {10, 20, 15, 2, 23, 90, 67};
    int size = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < size; i++) 
    {
        if ((i == 0 || marks[i] >= marks[i - 1]) &&
            (i == size - 1 || marks[i] >= marks[i + 1]))
        {
            printf("Peak element: %d\n", marks[i]);
            break;
        }
    }

    return 0;
}











//Count Prime Numbers in Array
#include <stdio.h>

int isPrime(int num) 
{
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int marks[] = {45, 67, 88, 76, 54};
    int size = sizeof(marks) / sizeof(marks[0]);
    int count = 0;

    for (int i = 0; i < size; i++) 
    {
        if (isPrime(marks[i])) 
        {
            count++;
        }
    }

    printf("Number of prime numbers: %d\n", count);

    return 0;
}










//Insert an Element in Array
#include <stdio.h>

int main() 
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5, pos, value;

    printf("Array before insertion:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position and value to insert: ");
    scanf("%d %d", &pos, &value);

    for (int i = size; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    size++;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}










//Delete - Front, Any Position in Between, & End in an Array
#include <stdio.h>

int main() 
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5, pos;

    printf("Array before deletion:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter position to delete (0 for front, %d for end, or in between): ", size - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= size) 
    {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = pos; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}










//Cyclically Rotate Array Clockwise by One
#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int last = arr[size - 1];

    printf("Array before rotation:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = size - 1; i > 0; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    printf("Array after rotation:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}










//Print Duplicates in an Array
#include <stdio.h>

int main() 
{
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int duplicateFound = 0;

    printf("Duplicates in the array:\n");
    for (int i = 0; i < size; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                printf("%d ", arr[i]);
                duplicateFound = 1;
                break;
            }
        }
    }

    if (!duplicateFound) 
    {
        printf("-1\n");
    } else 
    {
        printf("\n");
    }

    return 0;
}
