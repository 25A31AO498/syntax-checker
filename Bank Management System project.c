#include <stdio.h>

struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount acc;
    int choice;
    float amount;

    printf("=== Bank Management System ===\n");

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    acc.balance = 0;

    do {
        printf("\n\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Check Balance");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Amount Deposited Successfully!");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= acc.balance) {
                    acc.balance -= amount;
                    printf("Amount Withdrawn Successfully!");
                } else {
                    printf("Insufficient Balance!");
                }
                break;

            case 3:
                printf("\nAccount Number: %d", acc.accNo);
                printf("\nAccount Holder: %s", acc.name);
                printf("\nCurrent Balance: %.2f", acc.balance);
                break;

            case 4:
                printf("Thank You!");
                break;

            default:
                printf("Invalid Choice!");
        }

    } while(choice != 4);

    return 0;
}
