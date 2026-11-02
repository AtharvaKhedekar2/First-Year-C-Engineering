/*
 * Experiment No. 05
 * Aim: Menu-driven code to implement an app for a billing system.
 */

#include <stdio.h>

int main() {
    int choice, quantity, ch;
    float price, amount, total = 0;

    do {
        /* Display the menu */
        printf("\n---- MENU ----\n");
        printf("1. Pen (Rs 10)\n");
        printf("2. Notebook (Rs 50)\n");
        printf("3. Bag (Rs 500)\n");
        printf("4. Generate Bill and Exit\n");
        printf("Enter choice: ");

        /* If a letter is typed, discard it so that the menu does not loop forever */
        if (scanf("%d", &choice) != 1) {
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            if (ch == EOF) {
                break;
            }
            choice = 0;
        }

        /* Select the product and assign its price */
        price = 0;
        switch (choice) {
            case 1:
                price = 10;
                break;
            case 2:
                price = 50;
                break;
            case 3:
                price = 500;
                break;
            case 4:
                /* Exit option: the bill is displayed after the loop */
                break;
            default:
                printf("Invalid choice\n");
        }

        /* price stays 0 unless a product was selected */
        if (price > 0) {
            printf("Enter quantity: ");
            if (scanf("%d", &quantity) != 1) {
                while ((ch = getchar()) != '\n' && ch != EOF) {
                }
                quantity = 0;
            }

            if (quantity <= 0) {
                printf("Quantity must be positive\n");
            } else {
                amount = price * quantity;
                total = total + amount;
                printf("Amount for this item = Rs %.2f\n", amount);
            }
        }
    } while (choice != 4);

    /* Display the final bill */
    printf("\nTotal bill = Rs %.2f\n", total);
    printf("Thank you!\n");

    return 0;
}
