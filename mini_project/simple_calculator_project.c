        // SIMPLE CALCULATOR

// Comment: Including necessary header files
#include <stdio.h>
#include <conio.h>

// Function to add two integers
int sum(int a, int b)
{
    int sum = a + b; // Perform addition
    return sum; // Return the result
}

// Function to subtract two integers
int sub(int a, int b)
{
    int sub = a - b; // Perform subtraction
    return sub; // Return the result
}

// Function to multiply two integers
int mul(int a, int b)
{
    int mul = a * b; // Perform multiplication
    return mul; // Return the result
}

// Function to divide two doubles
double div(double a, double b)
{
    double div = a / b; // Perform division
    return div; // Return the result
}

// Main function
int main()
{
    int a, b; // Declare variables for input
    char op; // Declare variable for operator

    do
    {
        printf("\nWelcome to my DIY calculator\n"); // Display welcome message

        printf("Nhập a = "); // Prompt user to input 'a'
        scanf("%d", &a); // Read input for 'a'
        printf("\nNhập b = "); // Prompt user to input 'b'
        scanf("%d", &b); // Read input for 'b'

        printf("\nChoose your operator [+], [-], [x], [/]: "); // Prompt user to choose an operator
        scanf(" %c", &op); // Read input for operator
        getchar(); // Clear the input buffer

        // Switch case to perform operations based on operator
        switch (op)
        {
        case '+':
            int tong = sum(a, b); // Calculate sum
            printf("Tổng = %d", tong); // Display sum
            break;

        case '-':
            printf("Hiệu = %d", sub(a, b)); // Calculate difference and display
            break;
                
        case 'x':
            printf("Tích = %d", mul(a, b)); // Calculate product and display
            break;    

        case '/':
            printf("Thương = %f", div(a, b)); // Calculate quotient and display
            break;

        default:
            break;
        }

        printf("\nDo you want to exit? [O]: No; [Y]: Yes: "); // Prompt user to exit
        scanf(" %c", &op); // Read input for exit choice
        if(op == 'Y')
        {
            printf("See you later"); // Display exit message
            break; // Exit loop
        } 
        else if (op == 'O')
        {
            continue; // Continue loop
        } 
    } 
    while (1); // Infinite loop until broken out of
}
