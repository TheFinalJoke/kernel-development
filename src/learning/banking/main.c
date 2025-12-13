# include <stdio.h>
# include <stdlib.h>
# include <time.h>

float balance = 0.00f;
void checkBalance();
int deposit(float amount);
int withdraw(float amount);

int main() {

    printf("Welcome to NICKS Bank");

    int user_choice = 0;

    do {
        printf("Pick a option: \n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\n");
        scanf("%d", &user_choice);
        switch (user_choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                float withdraw_amount = 0.00f;
                printf("How much do you want to withdraw: ");
                scanf("%f", &withdraw_amount);
                if (withdraw_amount > balance) {
                    printf("You have insufficent funds\n");
                    continue;
                }
                balance = withdraw(withdraw_amount);
                break;
            case 3:
                float deposit_amount = 0.00f;
                printf("How much do you want to deposit: ");
                scanf("%f", &deposit_amount);
                balance = deposit(deposit_amount);
                break;
            case 4:
                break;
            default:
                printf("You have chosen an invalid option\n");
                break;
        };
    } while (user_choice != 4); 

    printf("Thanks for Banking with Nicks BANK\n");
    return 0;
}

void checkBalance() {
    printf("Your Balance is %.2f\n", balance);
}

int deposit(float amount) {
    return balance + amount;
}
int withdraw(float amount) {
    return balance - amount;
}