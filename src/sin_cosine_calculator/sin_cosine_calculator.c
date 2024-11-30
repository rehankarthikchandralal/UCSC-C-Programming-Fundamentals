#include <stdio.h>
#include <math.h> /* for sin() and cos() functions */

/* Function to print a table of sine and cosine values */
void printSinCosTable(double start, double end, double step) {
    printf("  Interval   |   sin(interval)   |   cos(interval)\n");
    printf("---------------------------------------------------\n");

    for (double interval = start; interval < end; interval += step) {
        printf("  %.2f       |   %.4f           |   %.4f\n", interval, sin(interval), cos(interval));
    }
}

int main(void) {
    double start = 0.0;
    double end = 1.0;
    double step = 0.1; /* Interval step size for table */

    /* Call the function to print the table */
    printSinCosTable(start, end, step);

    return 0;
}

