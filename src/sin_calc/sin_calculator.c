#include <stdio.h>
#include <math.h>

int main(void) {
    double value;

    // Prompt the user for input
    printf("Enter a value between 0 and 1 (non-inclusive): ");
    scanf("%lf", &value);

    // Check if the input is in the valid range
    if (value > 0 && value < 1) {
        // Calculate the sine of the value
        double result = sin(value);
        printf("The sine of %.2f is %.4f\n", value, result);
    } else {
        printf("Error: The value must be between 0 and 1 (non-inclusive).\n");
    }

    return 0;
}

