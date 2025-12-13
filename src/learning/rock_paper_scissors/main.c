#include <stdio.h>
# include <stdlib.h>
# include <time.h>

int generate_computer_choice();
int determine_winner(int user_choice, int computer_choice);

int main() {
    int user_choice, computer_choice, winner = 0;
    printf("Welcome to Rock, Paper, Scissors!\n");
    do {
        printf("Choose 0: Rock, 1 Paper, 2 for Scissors: ");
        scanf("%d", &user_choice);
        computer_choice = generate_computer_choice();
        winner = determine_winner(user_choice, computer_choice);
    } while (winner == 0);
    printf("Winner: %d", winner);
    switch (winner) {
        case 1:
            printf("User has won!\n");
            break;
        case -1:
            printf("Computer has won!\n");
            break;
        default: 
            printf("Something went wrong\n");
            return 1;
    }

    return 0;
}

int generate_computer_choice() {
    srand(time(NULL));
    return rand() % 3; // 0: Rock, 1: Paper, 2: Scissors
}

int determine_winner(int user_choice, int computer_choice) {
    if (user_choice == computer_choice) {
        printf("We had a tie!");
        return 0; // Tie
    } else if ((user_choice == 0 && computer_choice == 2) ||
               (user_choice == 1 && computer_choice == 0) ||
               (user_choice == 2 && computer_choice == 1)) {
        return 1; // User wins
    } else {
        return -1; // Computer wins
    }
}