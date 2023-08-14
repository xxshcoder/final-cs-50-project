#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 10

struct Account {
    int accountNumber;
    char name[50];
    double balance;
};

struct Account accounts[MAX_ACCOUNTS];
int numAccounts = 0;

void createAccount() {
    if (numAccounts >= MAX_ACCOUNTS) {
        printf("Maximum number of accounts reached.\n");
        return;
    }

    struct Account newAccount;
    printf("Enter account number: ");
    scanf("%d", &newAccount.accountNumber);
    printf("Enter account holder's name: ");
    scanf("%s", newAccount.name);
    printf("Enter initial balance: ");
    scanf("%lf", &newAccount.balance);

    accounts[numAccounts++] = newAccount;
    printf("Account created successfully.\n");
}

void displayAccounts() {
    if (numAccounts == 0) {
        printf("No accounts to display.\n");
        return;
    }

    printf("Account Number\tAccount Holder\tBalance\n");
    for (int i = 0; i < numAccounts; i++) {
        printf("%d\t\t%s\t\t%.2lf\n", accounts[i].accountNumber, accounts[i].name, accounts[i].balance);
    }
}

void deposit() {
    int accountNumber;
    double amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    int found = 0;
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found.\n");
    }
}

void withdraw() {
    int accountNumber;
    double amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    int found = 0;
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Withdrawal successful.\n");
            } else {
                printf("Insufficient balance.\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nBanking System Menu:\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                displayAccounts();
                break;
            case 3:
                deposit();
                break;
            case 4:
                withdraw();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
