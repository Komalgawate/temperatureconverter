#include <stdio.h>
#include <stdio.h>
int main() {
    int choice;
    float celsius, fahrenheit;
    printf("**MENU**\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice : ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("%.3f Celsius is equal to %.3f Fahrenheit\n",celsius,fahrenheit);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) / 9 * 5;
            printf("%.3f Fahrenheit is equal to %.3f Celsius\n", fahrenheit,celsius);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}