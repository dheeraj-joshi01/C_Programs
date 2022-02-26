/******************************************************************************

                          ATM Simulation

*******************************************************************************/

#include<stdio.h>

int login(int, int);
int check_bal(int);
int withdraw(int,int);
int deposit();


int users[5][3] = {001, 111, 10000, 002, 222,15500, 003, 333, 15000, 004, 444, 56000, 005, 555, 20000};     //user data


int main()
{
    
    int id, pass, count=0, s=0, opt=0, flag=1, amt=0;

    printf("Welcome to Ubuntu Virtual ATM.!!!\n\nEnter your Login ID and Password:\n");
    scanf("%d%d", &id, &pass);

    while(count<3)                      //varifying login details
    {
        if(login(id,pass) == 1)
        {
            printf("Logged-in Successfully\n");
            s=1;
            break;
            
        }

        else if(count == 2)
        {
            printf("Access Blocked\n");
            break;
        }
    
        else
        {
            printf("Password incorrect...Try again\n");
        }
        scanf("%d", &pass);
        count++;

    }

    if(s==1)
    {
        while(flag == 1 )
        {
            printf("\nWhat do you want to do ?\nSelect the Option:\n\n");
            printf("1 - Check A/C Balance\n2 - Withdraw\n3 - Deposit\n4 - Logout\n\n");
            scanf("%d", &opt);
            switch(opt)
            {
                case 1:                //balance_check
                check_bal(id);             
                break;

                case 2:                //withdraw amount
                printf("\nEnter the amount you want to withdraw:\n");
                scanf("%d", &amt);
                withdraw(id, amt);         
                break;

                case 3:                //deposit amount
                printf("\nEnter the amount you want to deposit:\n");
                scanf("%d", &amt);
                deposit(id, amt);              
                break;

                case 4:                //logout
                printf("\nLogged Out Successfully.\nThanks for using our service.\n");
                flag = 0;
                break;
        
                default:
                printf("Invalid option....\n");
            }
        }
    }

    return 0;
}


int login(int id, int pass)
{
    for(int i=0; i<5; i++)
    {
        if(users[i][0] == id && users[i][1] == pass)
        {
            return 1;
        }
    }

}

int check_bal(int id)
{
    for(int i=0;i<5;i++)
    {
        if(users[i][0] == id)
        {
            printf("\nYour a/c balance is:\n%d\n",users[i][2]);
        }
    }
    return 0;
}


int withdraw(int id, int amount)
{
    for(int i=0;i<5;i++)
    {
        if(users[i][0] == id)
        {
            if(amount < users[i][2])
            {
                users[i][2] -= amount;
                printf("\nYou have withdrawn Rs. %d\n",amount);
            }
            
            else
            {
                printf("\nInsufficient Balance...\n");
            }
            
        }
    }
    return 0;
}


int deposit(int id, int amount)
{
    for(int i=0;i<5;i++)
    {
        if(users[i][0] == id)
        {
            users[i][2] += amount;
            printf("You have Deposited Rs. %d\n",amount);
            
        }
    }
    return 0;
}

