#include <stdio.h>


enum TicketType {
    STUDENT = 0,
    SENIOR = 1,
    BOTH = 2,
    NONE = 3,
};

int main() {

    enum TicketType ticket_type;
    float price = 10.00f;
    printf("Enter ticket type (0 for STUDENT, 1 for SENIOR, 2 for BOTH, 3 for N/A): ");
    scanf("%d", (int*)&ticket_type);

    switch (ticket_type) {
        case STUDENT:
            printf("You selected STUDENT ticket. You get a 10%% discount!\n");
            price = price * 0.9f;
            break;
        case SENIOR:
            printf("You selected SENIOR ticket. You get a 20%% discount!\n");
            price = price * 0.8f;
            break;
        case BOTH:
            printf("You selected BOTH ticket. You get a 30%% discount!\n");
            price = price * 0.7f;
            break;
        case NONE:
            printf("Not a Senior or student ticket type selected.\n");
            break;
        default:
            printf("Invalid ticket type selected.\n");
            break;
    }
    printf("Final ticket price: $%.2f\n", price);
    return 0; 
}