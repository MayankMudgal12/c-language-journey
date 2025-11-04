#include <stdio.h>

void deposit(double *balance, double amount) {
    if (amount > 0) *balance += amount;
    else printf("Invalid amount.\n");
}

void withdraw(double *balance, double amount) {
    if (amount > 0 && amount <= *balance) *balance -= amount;
    else printf("Insufficient balance or invalid amount.\n");
}

void check_balance(double balance) {
    printf("Current balance: %.2f\n", balance);
}

int main() {
    double balance = 0.0, amount;
    int choice;

    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                deposit(&balance, amount);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                withdraw(&balance, amount);
                break;

            case 3:
                check_balance(balance);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }
}
