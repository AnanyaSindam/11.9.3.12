#include <stdio.h>

int main() {
    FILE *file = fopen("11.dat", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Parameters for the first GP
    double first_term_1 = 5.0 / 2.0;
    double common_ratio_1 = 2.0 / 5.0;

    // Parameters for the second GP
    double first_term_2 = 2.0 / 5.0;
    double common_ratio_2 = 5.0 / 2.0;

    // Number of terms
    int n_terms = 20;

    // Write the values for the first GP to the file
    for (int i = 0; i < n_terms; ++i) {
        fprintf(file, "%.6f\n", first_term_1);
        first_term_1 *= common_ratio_1;
    }

    // Write a separator to distinguish between the two GPs
    fprintf(file, "\n\n");

    // Write the values for the second GP to the file
    for (int i = 0; i < n_terms; ++i) {
        fprintf(file, "%.6f\n", first_term_2);
        first_term_2 *= common_ratio_2;
    }

    // Close the file
    fclose(file);

    return 0;
}

