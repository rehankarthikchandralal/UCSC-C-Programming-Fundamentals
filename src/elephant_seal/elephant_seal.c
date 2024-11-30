#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5000  // Adjust based on expected data size

int main() {
    FILE *file;
    int data[MAX_SIZE];
    int count = 0;
    double sum = 0.0;
    double average;

    // Open the file for reading
    file = fopen("dataset.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Could not open the file.\n");
        return 1;
    }

    // Read data from the file
    while (fscanf(file, "%d", &data[count]) == 1) {
        count++;
        if (count >= MAX_SIZE) {
            fprintf(stderr, "Error: Data exceeds maximum array size.\n");
            fclose(file);
            return 1;
        }
    }

    fclose(file);

    // Calculate the sum of the data
    for (int i = 0; i < count; i++) {
        sum += data[i];
    }

    // Calculate the average
    if (count > 0) {
        average = sum / count;
        printf("The average weight of the northern elephant seals is %.2f.\n", average);
    } else {
        printf("No data available to calculate the average.\n");
    }

    return 0;
}

