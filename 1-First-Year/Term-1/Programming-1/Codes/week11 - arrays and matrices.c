#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a program in C to accept two matrices and check whether they are equal.

/*

Input Rows and Columns of the 1st matrix :2 2
Input Rows and Columns of the 2nd matrix :2 2

Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
…
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
…
Expected Output :
The first matrix is :
1 2
3 4
The second matrix is :
1 2
3 4
The Matrices can be compared :
Two matrices are equal.

*/

int main()
{
    int x[10][10], y[10][10];
    int Xrows,Xcolumns,Yrows,Ycolumns;
    int i,j;

    printf("Enter X matrix rows and columns:\n");
    scanf("%d %d",&Xrows,&Xcolumns);

    printf("Input elements in the first matrix:\n");
    for(i = 0; i < Xrows; i++)
        for(j = 0; j < Xcolumns; j++){
            scanf("%d",&x[i][j]);
        }

    printf("Enter Y matrix rows and columns:\n");
    scanf("%d %d",&Yrows,&Ycolumns);

    printf("Input elements in the second matrix:\n");
    for(i = 0; i < Yrows; i++){
        for(j = 0; j < Ycolumns; j++){
            scanf("%d",&y[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for(i = 0; i < Xrows; i++) {
        for(j = 0; j < Xcolumns; j++) {
            printf("%d", x[i][j]);
    }
    printf("\n");
    }

    printf("The second matrix is:\n");
    for(i = 0; i < Yrows; i++) {
        for(j = 0; j < Ycolumns; j++) {
            printf("%d", y[i][j]);
    }
    printf("\n");
    }

    printf("The Matrices can be compared : \n");
    if(Xrows != Yrows || Xcolumns != Ycolumns){
        printf("Matrices are not equal.\n");
        return 0;
    }


    for(i = 0; i < Xrows; i++){
        for(j = 0; j < Xcolumns; j++){
            if(x[i][j] != y[i][j]){
                printf("Matrices are not equal.\n");
                return 0;
            }
        }
    }

    printf("Matrices are equal.\n");
    return 0;
}

// Example 2
// Write a program in C to merge one sorted array into another sorted array.

/*

Expected Output :

The given Large Array is : 10 12 14 16 18 20 22
The given Small Array is : 11 13 15 17 19 21
After merged the new Array is :
10 11 12 13 14 15 16 17 18 19 20 21 22

*/

int main() {

    int large[] = {10, 12, 14, 16, 18, 20, 22};
    int small[] = {11, 13, 15, 17, 19, 21};
    int merged[13];

    int i, j, reserve;

    for(i = 0; i < 7; i++){
        merged[i] = large[i];
    }

    for(i = 0; i < 6; i++){
        merged[7 + i] = small[i];
    }

    for(i = 0; i < 12; i++){
        for(j = i + 1; j < 13; j++){
            if(merged[i] > merged[j]){
                reserve = merged[i];
                merged[i] = merged[j];
                merged[j] = reserve;
            }
        }
    }

    printf("After merged the new Array is :\n");

    for(i = 0; i < 13; i++){
        printf("%d ", merged[i]);
    }

    return 0;
}

// Example 3
// Write a program in C to find the smallest missing element in an unsorted array.

/*

Expected Output :
The given array is : 0 1 3 4 5 6 7 9
The missing smallest element is: 2

*/

int main(){

    int a[10];

    int i,j,reserve;

    printf("Enter numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                reserve = a[i];
                a[i] = a[j];
                a[j] = reserve;
            }
        }
    }

    if(a[0] != 0){
        printf("The missing smallest element is: 0\n");
        return 0;
    }

    for(i = 0; i < 9; i++){
        if(a[i+1] != a[i] + 1){
            printf("The missing smallest element is: %d\n", a[i] + 1);
            return 0;
        }
    }

    printf("The missing smallest element is: %d\n", a[9] + 1);

    return 0;
}
