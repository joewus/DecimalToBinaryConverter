#include <stdio.h>

int main() {
    // Declare variables
    int number;
    int i = 0;
    int j;
    int result[50];  // Array to store binary digits

    // Ask user to input the number
    printf("Please enter a decimal number to convert to binary:\n");
    scanf("%d", &number);

    // Ensure the user enters a positive number
    if (number < 0) {
        printf("You have to enter a positive number.\n");
        return 1;
    }

    // Edge case for number 0
    if (number == 0) {
        printf("0\n");
        return 0;
    }

    // Convert decimal number to binary
    while (number > 0) {
        result[i] = number % 2;
        number = number / 2;
        i++;
    }

    // Print the binary representation in reverse order
    printf("The binary representation is: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", result[j]);
    }
    printf("\n");  // Add a newline for better output formatting

    return 0;
}
