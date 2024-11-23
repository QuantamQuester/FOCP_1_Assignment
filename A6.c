//Tic Tac Toe
#include <stdio.h>

void Board(char board[3][3]) 
{
    printf("\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int Winner(char board[3][3]) 
{
    // Check rows and columns
    for (int i = 0; i < 3; i++) 
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) 
        {
            return board[i][0];
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) 
        {
            return board[0][i];
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
    {
        return board[0][2];
    }

    // No winner
    return 0;
}

int BoardFull(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (board[i][j] != 'X' && board[i][j] != 'O') 
            {
                return 0; // Found an empty space
            }
        }
    }
    return 1; // Board is full
}

int main() 
{
    char board[3][3] = 
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    char currentPlayer = 'O';
    int move, row, col;
    int winner = 0;

    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1: O\nPlayer 2: X\n");

    while (1) 
    {
        Board(board);
        printf("Player %c, enter your move (1-9): ", currentPlayer);
        scanf("%d", &move);

        // Map the move to row and column
        if (move < 1 || move > 9) 
        {
            printf("Invalid move. Try again.\n");
            continue;
        }
        row = (move - 1) / 3;
        col = (move - 1) % 3;

        // Check if the cell is already occupied
        if (board[row][col] == 'X' || board[row][col] == 'O') 
        {
            printf("Cell already occupied. Try again.\n");
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;

        // Check for a winner
        winner = Winner(board);
        if (winner) 
        {
            Board(board);
            printf("Player %c wins!\n", winner);
            break;
        }

        // Check for a draw
        if (BoardFull(board))
        {
            Board(board);
            printf("It's a draw!\n");
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'O') ? 'X' : 'O';
    }

    printf("Game Over. Thanks for playing!\n");
    return 0;
}