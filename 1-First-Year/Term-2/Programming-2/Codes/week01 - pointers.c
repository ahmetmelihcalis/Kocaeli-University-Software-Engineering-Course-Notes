#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a program in C to show the basic declaration of a pointer.

// Expected Output :

/*
 Pointer : Show the basic declaration of pointer :
-------------------------------------------------------
 Here is m=10, n and o are two integer variable and *z is an integer

 z stores the address of m  = 0x7ffd40630d44

 *z stores the value of m = 10

 &m is the address of m = 0x7ffd40630d44

 &n stores the address of n = 0x7ffd40630d48

 &o  stores the address of o = 0x7ffd40630d4c

 &z stores the address of z = 0x7ffd40630d50
*/

/*
int main(){

    int m = 10,n,o,*z;

    z = &m;

    printf("z stores the address of m  = %p\n", z);
    printf("*z stores the value of m = %i\n", *z);
    printf("&m is the address of m = %p\n", &m);
    printf("&n stores the address of n = %p\n", &n);
    printf("&o  stores the address of o = %p\n", &o);
    printf("&z stores the address of z = %p\n", &z);

}
*/

// Example 2
// Write a program in C to demonstrate how to handle pointers in a program.

/*
int main()
{
    int *ab;
    int m;

    m = 29;

    printf(" Address of m : %p\n", &m);
    printf(" Value of m : %d\n\n", m);

    ab = &m;

    printf(" Now ab is assigned with the address of m\n");
    printf(" Address of pointer ab : %p\n", ab);
    printf(" Content of pointer ab : %d\n\n", *ab);

    m = 34;

    printf(" The value of m assigned to 34 now.\n");
    printf(" Address of pointer ab : %p\n", ab);
    printf(" Content of pointer ab : %d\n\n", *ab);

    *ab = 7;

    printf(" The pointer variable ab is assigned the value 7 now.\n");
    printf(" Address of m : %p\n", &m);

    printf(" Value of m : %d\n\n", m);

    return 0;
}
*/

// Example 3
// Write a program in C to add two numbers using pointers.

/*
int main() {
    int first, second, *ptr1, *ptr2, sum;

    printf("Input the first number : ");
    scanf("%d", &first);

    printf("Input the second number : ");
    scanf("%d", &second);

    ptr1 = &first;
    ptr2 = &second;

    sum = *ptr1 + *ptr2;

    printf("The sum of the entered numbers is : %d\n\n", sum);
    return 0;
}
*/

// Example 4
// Write a program in C to add numbers using call by reference.

/*
int sumTwoNumbers(int *n1, int *n2);

int main() {
    int first, second, sum;

    printf("Input the first number : ");
    scanf("%d", &first);
    printf("Input the second number : ");
    scanf("%d", &second);

    sum = sumTwoNumbers(&first, &second);

    printf("The sum of %d and %d is %d", first, second, sum);
    return 0;
}

int sumTwoNumbers(int *n1, int *n2) {
    int sum;
    sum = *n1 + *n2;
    return sum;
}
*/

// Example 5
// Write a program in C to find the maximum number between two numbers using a pointer.

/*
int main() {
    int num1, num2;
    int *p1, *p2;
    int *max;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    p1 = &num1;
    p2 = &num2;

    if (*p1 > *p2)
        max = p1;
    else
        max = p2;

    printf("Maximum number is: %d\n", *max);

    return 0;
}
*/

// Example 6
// Write a program in C to store n elements in an array and print the elements using a pointer.

/*
int main() {
    int array[20], i, n;

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array : \n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", array + i);
    }

    printf("The elements you entered are :\n");
    for (i = 0; i < n; i++) {
        printf("element - %d : %d \n", i, *(array + i));
    }
    return 0;
}
*/
