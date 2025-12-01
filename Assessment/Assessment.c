#include <stdio.h>

int main() {
    int choice, quantity;
    float price, totalBill = 0.0;
    char moreOrder;

    // Food Menu List
    // Business Logic: Menu is fixed and used for selection mapping
    printf("=========== WELCOME TO FOOD BILLING SYSTEM ===========\n");

    do {
        // Display available food items
        printf("\n----------- MENU -----------\n");
        printf("1. Pizza      - Rs. 180\n");
        printf("2. Burger     - Rs.  100\n");
        printf("3. Dhosa      - Rs.  120\n");
        printf("4. Idli       - Rs. 80\n");
        printf("-----------------------------\n");

        // Business Logic: Taking user choice
        printf("Enter the item number you want to order: ");
        scanf("%d", &choice);

        // Business Logic: Validate item and map prices
        switch(choice) {
            case 1: price = 180; break;
            case 2: price = 100; break;
            case 3: price = 120; break;
            case 4: price = 80; break;

            default:
                printf("Invalid choice! Please select a valid item.\n");
                continue;   // Restart menu
        }

        // Take quantity
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        // Business Logic: Calculate bill for selected item
        float currentItemTotal = price * quantity;
        totalBill += currentItemTotal;

        // Show the user their current order amount and cumulative bill
        printf("Item cost = Rs. %.2f\n", currentItemTotal);
        printf("Current Total Bill = Rs. %.2f\n\n", totalBill);

        // Ask if they want to add more
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &moreOrder);

    } while(moreOrder == 'y' || moreOrder == 'Y');

    // Final bill displayed
    printf("\n============================================\n");
    printf("                FINAL BILL                  \n");
    printf("============================================\n");
    printf("Total Amount to Pay: Rs. %.2f\n", totalBill);
    printf("============================================\n");
    printf("Thank you for ordering! Visit Again!\n");

    return 0;
}
