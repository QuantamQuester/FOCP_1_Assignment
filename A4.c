//Rock,Paper,Scissors
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayChoices() 
{
    printf("Choices:\n");
    printf("--------------\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice: ");
}

    char* Choice(int choice) 
{
    if (choice == 1) return "Rock";
    if (choice == 2) return "Paper";
    return "Scissors";
}

int main() 
{
    int user, computer;
    char playAgain;

    srand(time(0)); // Seed the random number generator

    do 
    {
        // Display choices to the user
        displayChoices();
        scanf("%d", &user);

        // Validate user input
        if (user < 1 || user > 3) {
            printf("Invalid. Please try again.\n\n");
            continue;
    }

        // Generate computer's choice
        int random = rand() % 101; // Random number between 0 and 100
        if (random <= 33) 
        {
            computer = 1; // Rock
        } 
        else if (random <= 66)
        {
            computer = 2; // Paper
        } 
        else 
        {
            computer = 3; // Scissors
        }

        // Display choices
        printf("You chose: %s\n", Choice(user));
        printf("Computer chose: %s\n", Choice(computer));

        // Determining the winner
        if (user == computer)
        {
            printf("It's a tie!\n");
        } 
        else if ((user == 1 && computer == 3) || 
                   (user == 2 && computer == 1) || 
                   (user == 3 && computer == 2)) 
        {
            printf("You win!\n");
        }
        else 
        {
            printf("Computer wins!\n");
        }

        // Ask if the user wants to play again or not
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
        printf("\n");
    } 
    while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}