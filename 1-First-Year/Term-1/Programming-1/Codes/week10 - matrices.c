#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a program in C for a 2D array of size 3x3 and print the matrix.

// Test Data :
// Input elements in the matrix:

// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [0],[2] : 3
// element - [1],[0] : 4
// element - [1],[1] : 5
// element - [1],[2] : 6
// element - [2],[0] : 7
// element - [2],[1] : 8
// element - [2],[2] : 9

// Expected output:

// The matrix is:
// 1 2 3
// 4 5 6
// 7 8 9

/*
    int main() {

        int arr[3][3];
        int i, j;

        printf("Input elements in the matrix:\n");

        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        printf("\nThe matrix is:\n");

        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
*/

// Example 2
// Write a program in C for adding two matrices of the same size.

/*
    int main() {

        int arr1[3][3];
        int arr2[3][3];
        int result[3][3];
        int i, j;

        printf("Input elements in the first matrix:\n");

        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Input elements in the second matrix:\n");

        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }

        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                result[i][j] = arr1[i][j] + arr2[i][j];
            }
        }


        printf("\nResult matrix:\n");
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

*/

// Example 3
// Write a program in C for the substraction of two matrices.

/*
int main() {

    int arr1[3][3];
    int arr2[3][3];
    int result[3][3];
    int i, j;

    printf("Input elements in the first matrix:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }


    printf("\nResult matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

// Example 4
// Write a program in C for the multiplication of two square matrices.

/*
    int main() {
        int matA[10][10], matB[10][10], result[10][10];
        int n, i, j, k;

        printf("Enter the size of the square matrix (N): ");
        scanf("%d", &n);

        printf("Enter elements for Matrix A:\n");
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                printf("Element A[%d][%d]: ", i, j);
                scanf("%d", &matA[i][j]);
        }
    }

        printf("Enter elements for Matrix B:\n");
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                printf("Element B[%d][%d]: ", i, j);
                scanf("%d", &matB[i][j]);
        }
    }

        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                result[i][j] = 0;
                for(k = 0; k < n; k++) {
                    result[i][j] = result [i][j] + (matA[i][k] * matB[k][j]);
            }
        }
    }

    printf("Multiplication Result\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

// Example 5
// Write a program in C to find the transpose of a given matrix.

/*
    int main() {

        int r, c;

        printf("Enter number of rows: ");
        scanf("%d", &r);
        printf("Enter number of columns: ");
        scanf("%d", &c);

        int matrix[r][c];
        int transpose[c][r];

        printf("Enter matrix elements:\n");
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }

        printf("Transpose of the matrix:\n");
        for(int i = 0; i < c; i++) {
            for(int j = 0; j < r; j++) {
                printf("%d ", transpose[i][j]);
            }
            printf("\n");
        }

        return 0;
}
*/

// Example 6
// Write a program in C to find the sum of the right diagonels of a matrix.

/*
    int main() {

        int n;
        printf("Enter matrix size (n): ");
        scanf("%d", &n);

        int matrix[n][n];
        int sum = 0;

        printf("Enter matrix elements:\n");
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        for(int i = 0; i < n; i++) {
            sum += matrix[i][i];
        }

        printf("Sum of right diagonal = %d\n", sum);

        return 0;
}
*/


// Example 7
// Write a program in C to find the sum of the left diagonels of a matrix.

/*
    int main() {

        int n;
        printf("Enter matrix size (n): ");
        scanf("%d", &n);

        int matrix[n][n];
        int sum = 0;

        printf("Enter matrix elements:\n");
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        for(int i = 0; i < n; i++) {
            sum += matrix[i][n - 1 - i];
        }

        printf("Sum of left (secondary) diagonal = %d\n", sum);

        return 0;
    }
*/

// Example 8
// Write a program in C to print or display the lower triangular of a given matrix.

/*
    int main() {

        int n;
        printf("Enter a matrix size: ");
        scanf("%d", &n);

        int a[n][n];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                scanf("%d", &a[i][j]);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i >= j)
                    printf("%d ", a[i][j]);
                else
                    printf("0 ");
            }
            printf("\n");
        }

    return 0;

    }

*/

// Example 9
// Write a program in C to print or display an upper triangular matrix.

/*
    int main() {

        int n;
        printf("Enter a matrix size: ");
        scanf("%d", &n);

        int a[n][n];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                scanf("%d", &a[i][j]);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(j >= i)
                    printf("%d ", a[i][j]);
                else
                    printf("0 ");
            }
            printf("\n");
        }

    return 0;

    }

*/
