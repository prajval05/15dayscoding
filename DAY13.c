#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int target, guess, attempts = 0;
    srand(time(0)); 
    target = rand() % 100 + 1; 
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");
    do 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess < target)
        {
            printf("Too low! Try again.\n");
        } 
        else if (guess > target) 
        {
            printf("Too high! Try again.\n");
        }
        else 
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    }
      while (guess != target);
    return 0;
}
