#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess;

    // Initialize random number generator
    srand(time(0));
    target = rand() % 100 + 1;  // Target number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100:\n");

    // Loop until the user guesses correctly
    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < target) {
            printf("Too low! Try again.\n");
        } else if (guess > target) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number.\n");
            break;
        }
    }

    return 0;
}


