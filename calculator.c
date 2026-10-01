#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("------> BASIC CALCULATOR <------\n");
    printf("1. ~ Addition\n");
    printf("2. ~ Subtraction\n");
    printf("3. ~ Multiplication\n");
    printf("4. ~ Division\n");

    printf("\nEnter your choice (1-4):- ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice)
    {
        case 1:
            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;

        case 4:
            if (num2 == 0)
            {
                printf("Error: Division by zero is not possible.\n");
            }
            else
            {
                result = num1 / num2;
                printf("Division = %.4f\n", result);
            }
            break;

        default:
            printf("Invalid choice. Please select a number from 1 to 4.\n");
    }

    return 0;
}
// use gcc task1.c to compile the code and .a\.exe to run the program