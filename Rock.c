#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// function to implement the game
int game(char you, char computer)
{
    // if both the user and computer has choose the same thing
    if (you == computer)
        return -1;

    // if user's choice is rock and computer's choice is paper
    if (you == 'r' && computer == 'p')
        return 0;

    // if user's choice is paper and computer's choice is rock
    else if (you == 'p' && computer == 'r')
        return 1;

    // if user's choice is rock and computer's choice is scissor
    if (you == 'r' && computer == 's')
        return 1;

    // if user's choice is scissor and computer's choice is rock
    else if (you == 's' && computer == 'r')
        return 0;

    // if user's choice is paper and computer's choice is scissor
    if (you == 'p' && computer == 's')
        return 0;

    // if user's choice is scissor and computer's choice is paper
    else if (you == 's' && computer == 'p')
        return 1;
}
int main()
{
    while (1 == 1)
    {
        char you, computer;

        // Get user input
        printf("Enter 'r' for rock, 'p' for paper, or 's' for scissors: ");
        scanf(" %c", &you);

        // Generate random computer choice
        int randNum = rand() % 3;
        if (randNum == 0)
            computer = 'r';
        else if (randNum == 1)
            computer = 'p';
        else
            computer = 's';

        // Display user and computer choices
        printf("You chose %c and computer chose %c.\n", you, computer);

        // Determine the winner
        int result = game(you, computer);
        if (result == -1)
            printf("It's a tie!\n");
        else if (result == 0)
            printf("You win!\n");
        else
            printf("Computer wins!\n");
    }
    return 0;
}
