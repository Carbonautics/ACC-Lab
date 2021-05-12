#include <stdio.h>

struct customer_account {
    char Customer_Name[7];
    int account_number;
    char account_type[1];
    float balance;
};

struct customer_account bank[5] = {{"AB C", 101, "S", 8043.33},
                                    {"KL M", 103, "C", 250408.04},
                                    {"YU K", 104, "S", 10401},
                                    {"IR E", 105, "S", 5843.19},
                                    {"OE Y", 106, "C", 504939.23}};

int index = 0;
bank_array_size = sizeof(bank) / sizeof(bank[0]);

void main()
{
    int acc_no, choice;
    printf("---------------------------------\n");
    printf("Welcome to KLS-GIT Bank\n");
    printf("---------------------------------\n");

    input_acc_number:printf("\nEnter your account number: ");
    scanf("%d", &acc_no);
    
    input:for(int i = 0; i < bank_array_size; i++)
    {
        if(acc_no == bank[i].account_number)
        {
            index = i;
            printf("Account Number: %d \tAccount Type:%s\tName: %s\n", bank[i].account_number, bank[i].account_type, bank[i].Customer_Name);
            printf("\nEnter your choice: \n");
            printf("1. Balance Enquiry \t2. Deposit \t3. Withdraw\t 4. Exit:\n");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1: balance(index);
                        goto input;
                case 2: deposit(index);
                        goto input;
                case 3: withdraw(index);
                        goto input;
                case 4: return 0;
                default: printf("Please enter a valid number (1 2 3 or 4): \n");
                    goto input;
            }

        }
    }
    printf("Invalid account number!!! Please enter a valid account number.");
    goto input_acc_number;
}

void balance(int x){
    printf("%s, Your Balance is: %.3f\n", bank[x].Customer_Name, bank[x].balance);
    return;
}

void deposit(int x){
    float amt;
    printf("Enter the amount to be deposited: ");
    scanf("%f", &amt);

    bank[x].balance += amt;
    printf("Balanced Updated. Updated Balance: Rs. %.3f\n", bank[x].balance);
    return;
}

void withdraw(int x){
    int amt;
    printf("Your current balance: Rs. %.3f\n", bank[x].balance);
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amt);

    if(bank[x].balance > 1000 && (bank[x].balance - amt) >= 1000)
    {
        bank[x].balance -= amt;
        printf("\nAmount withdrawl successful.\n");
        printf("Current Balance: Rs. %.3f\n", bank[x].balance);
    }
    else if((bank[x].balance - amt) <= 1000){
        printf("You can only withdraw: Rs. %.2f. You cannot withdraw more than your minimum balance.\n", (bank[x].balance - 1000));
    }
    else{
        printf("Your balance is below Rs. 1000\n");
    }
    return;
}