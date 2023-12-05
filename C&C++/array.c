#include <stdio.h>

// Function to add two 2D arrays
void addArrays(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

// Function to subtract one 2D array from another
void subtractArrays(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

// Function to display a 2D array
void displayArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Example 2D arrays
    int rows = 3;
    int cols = 3;
    printf("Prachi Srivastava\n");

    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Arrays to store the result of addition and subtraction
    int sumArray[3][3];
    int diffArray[3][3];

    // Perform addition and subtraction
    addArrays(rows, cols, array1, array2, sumArray);
    subtractArrays(rows, cols, array1, array2, diffArray);

    // Display the original arrays and results
    printf("Array 1:\n");
    displayArray(rows, cols, array1);

    printf("\nArray 2:\n");
    displayArray(rows, cols, array2);

    printf("\nSum of Arrays:\n");
    displayArray(rows, cols, sumArray);

    printf("\nDifference of Arrays:\n");
    displayArray(rows, cols, diffArray);

    return 0;
}
