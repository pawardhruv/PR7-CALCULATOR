// QUESTION.1 CALCULATOR //
// DEVELOP A MENU-DRIVEN PROGRAM TO IMPLEMENT ARITHMATIC OPERATIONS SUCH AS +,-,*,/, AND % USING UDF, SWITCH CASE,AND LOOPING.
// MAKE SURE THAT THE PROGRAM IS ENDLESS UNTIL A CERTAIN LETTER IS PRESSED ? //


#include<stdio.h>

// UDF for arithmetic operations ?


int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

int divide(int a, int b) 
{
   return a/b;
}

int modulus(int a, int b) 
{
    return a % b;
}

int main()
{
    int choice, a, b;

// Loop to display the menu and perform operations ?
    // Display a welcome message

    printf("Welcome to the calculator program!\n");

    for(int i = 0; i < 100; i++)
    {
        printf("\n Menu:\n");
        printf("press 1 for +\n");
        printf("press 2 for - \n");
        printf("press 3 for *\n");
        printf("press 4 for / \n");
        printf("press 5 for %% \n");
        printf("press 0 for the exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

//EXIT CONDITION
        // If the user chooses 0, exit the program

        if(choice ==0)
        { 
            printf("Exiting the program\n");
            break;
        }

        // FOR INVALID CHOICE
    else if(choice >= 6)
        {
            printf("Invalid choice. Please try again.\n");
            break;
        }

        printf("Enter the first integer: ");
        scanf("%d", &a);
        printf("Enter the second integer: ");
        scanf("%d", &b);
        
// Switch case to handle the user's choice ?

        switch (choice) 
        {
            case 1:
                printf("\n addition of %d and %d is: %d\n", a, b, add(a, b));
                break;
            case 2:
                printf("substraction of %d and %d is: %d\n", a, b, subtract(a, b));
                break;
            case 3:
                printf("multiplication of %d and %d is: %d\n", a, b, multiply(a, b));
                break;
            case 4:
                printf("division of %d and %d is: %d\n", a, b, divide(a, b));
                break;
            case 5:
                printf("modulus of %d and %d is: %d\n", a, b, modulus(a, b));
                break;
            case 6:
                printf("Exiting From The Program");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
        return 0;
    }    
    

