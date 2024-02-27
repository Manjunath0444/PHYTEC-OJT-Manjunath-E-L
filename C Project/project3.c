#include <stdio.h>

// Structure to represent a bank account
struct BankAccount {
    char bankName[50];
    int accountNumber;
    char accountHolder[50];
    float balance;
    char benefits[100];
};

// Function to display account details
void displayAccount(struct BankAccount acc) {
    printf("Bank Name: %s\n", acc.bankName);
    printf("Account Number: %d\n", acc.accountNumber);
    printf("Account Holder: %s\n", acc.accountHolder);
    printf("Balance: $%.2f\n", acc.balance);
    printf("Benefits: %s\n", acc.benefits);
}

// Function to perform a withdrawal
void withdraw(struct BankAccount *acc, float amount) {
    if (amount > 0 && amount <= acc->balance) {
        acc->balance -= amount;
        printf("Withdrawal of $%.2f successful.\n", amount);
    } else {
        printf("Withdrawal failed. Insufficient funds.\n");
    }
}

int main() {
    printf("Welcome to the Bank Account Management System\n\n");

    struct BankAccount account1;
    printf("Enter Account 1 details:\n");
    printf("Bank Name: ");
    scanf("%s", account1.bankName);
    printf("Account Number: ");
    scanf("%d", &account1.accountNumber);
    printf("Account Holder: ");
    scanf("%s", account1.accountHolder);
    printf("Initial Balance: $");
    scanf("%f", &account1.balance);
    printf("Benefits: ");
    scanf("%s", account1.benefits);

    struct BankAccount account2;
    printf("\nEnter Account 2 details:\n");
    printf("Bank Name: ");
    scanf("%s", account2.bankName);
    printf("Account Number: ");
    scanf("%d", &account2.accountNumber);
    printf("Account Holder: ");
    scanf("%s", account2.accountHolder);
    printf("Initial Balance: $");
    scanf("%f", &account2.balance);
    printf("Benefits: ");
    scanf("%s", account2.benefits);

    printf("\nAccount Details:\n");
    printf("---------------\n");
    displayAccount(account1);
    printf("\n");
    displayAccount(account2);

    // Perform withdrawal for Account 1
    float withdrawalAmount1;
    printf("\nEnter the withdrawal amount for Account 1: $");
    scanf("%f", &withdrawalAmount1);
    withdraw(&account1, withdrawalAmount1);

    printf("\nAccount 1 Details After Withdrawal:\n");
    printf("----------------------------------\n");
    displayAccount(account1);

    // Perform withdrawal for Account 2
    float withdrawalAmount2;
    printf("\nEnter the withdrawal amount for Account 2: $");
    scanf("%f", &withdrawalAmount2);
    withdraw(&account2, withdrawalAmount2);

    printf("\nAccount 2 Details After Withdrawal:\n");
    printf("----------------------------------\n");
    displayAccount(account2);

    return 0;
}

