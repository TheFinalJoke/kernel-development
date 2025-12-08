#include <stdio.h>
#include <stdbool.h>
#include "main.h"

int main() {
    char item[100] = "";
    float price = 0.0f;
    int number_of_items = 0;
    printf("Welcome to the Shopping Application!\n");
    printf("What do you want to put in the shopping cart?\n");
    scanf("%99s", item);
    printf("What is the price of %s?\n", item);    
    scanf("%f", &price);
    printf("How many %s do you want to add to the cart?\n", item);
    scanf("%d", &number_of_items);
    float total_price = price * number_of_items;
    printf("You have added %d of %s to your cart. Total price: $%.2f\n", number_of_items, item, total_price);
    return 0;
}