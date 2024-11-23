//Hangman Game
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void displayWord(char word[], int guessed[]) 
{
    for (int i = 0; word[i] != '\0'; i++) 
    {
        if (guessed[i]) 
        {
            printf("%c ", word[i]);
        } 
        else 
        {
            printf("_ ");
        }
    }
    printf("\n");
}

int main()
{
    char word[] = "RISHIKA";  // The word to be guessed
    int wordLength = strlen(word);
    int guessed[wordLength];
    int chances = 3;
    char guess;
    int correctGuesses = 0;

    // Initialize guessed array to 0
    for (int i = 0; i < wordLength; i++) 
    {
        guessed[i] = 0;
    }

    printf("Welcome to Hangman!\n");
    printf("You have %d chances to guess the word correctly.\n", chances);

    while (chances > 0 && correctGuesses < wordLength) 
    {
        printf("\nCurrent word: ");
        displayWord(word, guessed);

        printf("Enter a letter: ");
        scanf(" %c", &guess);

        // Convert guess to uppercase to match the word
        guess = toupper(guess);

        int found = 0;
        for (int i = 0; i < wordLength; i++) 
        {
            if (word[i] == guess && !guessed[i])
            {
                guessed[i] = 1;  // Mark this letter as guessed
                correctGuesses++;
                found = 1;
            }
        }

        if (found) 
        {
            printf("Good job! '%c' is in the word.\n", guess);
        } 
        else 
        {
            chances--;
            printf("Wrong guess! '%c' is not in the word. You have %d chances left.\n", guess, chances);
        }
    }

    if (correctGuesses == wordLength) 
    {
        printf("\nCongratulations! You guessed the word: %s\n", word);
        printf("The man survives!\n");
    } 
    else 
    {
        printf("\nGame over! You ran out of chances.\n");
        printf("The word was: %s\n", word);
        printf("The man gets hanged!\n");
    }

    return 0;
}