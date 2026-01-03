#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a C program to print the numbers from 0 to 10 and from 10 to 0.

// for loop structure
// for(initialization; condition; increment/decrement)

/* for loop solution
int main() {
    int i;

    printf("From 0 to 10:\n");
    for (i = 0; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n\n");

    printf("From 10 to 0:\n");
    for (i = 10; i >= 0; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
*/

// while(condition)

/* while loop solution
int main() {
    int i;

    printf("From 0 to 10:\n");

    i = 0;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    printf("\n\n");

    printf("From 10 to 0:\n");

    i = 10;
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }

    printf("\n");

    return 0;
}
*/

// Example 2
// Write a C program to print only the even numbers from 0 to n.

/* for loop solution
int main() {
    int i, n;

    printf("Enter (n): ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        if (i % 2 == 0)
            printf("%d\n", i);
    }

    return 0;
}
*/

/* while loop solution
int main() {
    int i = 0, n;

    printf("Enter n: ");
    scanf("%d",&n);

    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
*/

// Example 3
// Write a C program to compute the sum of the first 10 natural numbers.

/* for loop solution
int main(){

    int i,sum = 0;

    for (i=0;i<=10;i++){
            sum += i;

    }

    printf("%d",sum);

    return 0;
}
*/

/* while loop solution
int main() {
    int i = 0, sum = 0;

    while (i <= 10) {
        sum += i;
        i++;
    }

    printf("%d", sum);

    return 0;
}
*/

// Example 4
// Write a program in C to display n terms of natural numbers and their sum.

/* for loop solution
int main() {
    int i, n, sum = 0;

    printf("Enter (n): ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);

    for (i = 0; i < n; i++) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
*/

/* while loop solution
int main(){

    int i = 0,n,sum = 0;

    printf("enter (n): ");
    scanf("%d",&n);

    printf("The first %d natural numbers are:\n", n);

    while (i<n){
        printf("%d\n",i);
        sum += i;
        i++;
    }

    printf("\nThe sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;

}
*/

// Example 5
// Write a program in C to read 10 numbers from keyboard and find their sum and average.

/* for loop solution
int main(){

    int i,number,sum=0;
    float average;

    for (i=0;i<10;i++){
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;

    }

    average = (float)sum / 10;

    printf("Sum = %d ",sum);
    printf("Average = %f ",average);

}
*/

/* while loop solution
int main() {
    int i = 0, number, sum = 0;
    float average;

    while (i < 10) {
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;
        i++;
    }

    average = (float)sum / 10;

    printf("\nSum = %d\n", sum);
    printf("Average = %f\n", average);

    return 0;
}
*/

// Example 6
// Write a program in C to display the cube of the number up to an integer.

/* for loop solution
int main() {
    int i, n;

    printf("Enter a (n): ");
    scanf("%d", &n);

    printf("The cubes of numbers from 0 to %d are:\n", n);

    for (i = 0; i <= n; i++) {
        printf("The cube of %d is: %d\n", i, i * i * i);
    }

    return 0;
}
*/

/* while loop solution
int main(){

    int i=0,n;

    printf("Enter a (n): ");
    scanf("%d", &n);

    printf("The cubes of numbers from 0 to %d are:\n", n);

    while(i<=n){
        printf("The cube of %d is: %d\n", i, i * i * i);
        i++;

    }

    return 0;
}
*/

// Example 7
// Write a C program in C to display the multiplication table for a given integer.

/* for loop solution
int main() {
    int i, n;

    printf("Enter the (n): ");
    scanf("%d",&n);

    printf("Multiplication table of %d:\n", n);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
*/

/* while loop solution
int main(){

    int i = 1,n;

    printf("Enter the (n): ");
    scanf("%d",&n);

    printf("Multiplication table of %d:\n", n);

    while(i<=10){
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }

    return 0;

}
*/

// Example 8
// Write a C program to display the n terms of odd natural numbers and their sum.

/* for loop solution
int main() {
    int i, n, sum = 0;

    printf("Input (n) : ");
    scanf("%d", &n);
    printf("The odd numbers are :");

    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
        sum += 2 * i - 1;
    }

    printf("\nThe Sum of odd Natural Number up to %d terms : %d \n", n, sum);

    return 0;

}
*/

/* while loop solution
int main() {
    int i = 1, n, sum = 0;

    printf("Input (n) : ");
    scanf("%d", &n);

    printf("The odd numbers are : ");

    while (i <= n) {
        int odd = 2 * i - 1;
        printf("%d ", odd);
        sum += odd;
        i++;
    }

    printf("\nThe Sum of odd Natural Numbers up to %d terms : %d\n", n, sum);

    return 0;
}
*/

// Example 9
// Write a program in C to display the multiplier table vertically from 1 to n.

/* for loop solution
int main() {
    int n, i, j;

    printf("Enter a (n): ");
    scanf("%d", &n);

    printf("Vertical Multiplication Tables from 1 to %d:\n\n", n);

    for (j = 1; j <= n; j++) {
        printf("Multiplication table of %d:\n", j);
        for (i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}
*/

/* while loop solution
int main() {
    int n, i, j;

    printf("Enter a (n): ");
    scanf("%d", &n);

    printf("Vertical Multiplication Tables from 1 to %d:\n\n", n);

    j = 1;
    while (j <= n) {
        printf("Multiplication table of %d:\n", j);
        i = 1;
        while (i <= 10) {
            printf("%d * %d = %d\n", j, i, j * i);
            i++;
        }
        printf("\n");
        j++;
    }

    return 0;
}
*/
