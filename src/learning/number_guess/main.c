# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    int number, guess, attempts = 0;
    
    srand(time(NULL));

    number = rand() % 100 + 1; // Random number between 1 and 100
    printf("Welcome to the Number Guessing Game!\n");
    for(int i = 0; i < attempts + 1; i++) {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if(guess < number) {
            printf("Too low! Try again.\n");
        } else if(guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
            break;
        }
    }
}   