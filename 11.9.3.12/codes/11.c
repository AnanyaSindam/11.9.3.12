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

    // Write the values for both GPs to the file in two columns with integers on the x-axis
    for (int i = 1; i <= n_terms; ++i) {
        fprintf(file, "%d\t%e\t%e\n", i, first_term_1, first_term_2);
        first_term_1 *= common_ratio_1;
        first_term_2 *= common_ratio_2;
    }

    // Close the file
    fclose(file);

    return 0;
}

