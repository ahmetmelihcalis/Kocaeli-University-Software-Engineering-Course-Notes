#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a C program to read any day number in integer and display the corresponding day name using switch-case.

/*
int main() {

    int daynumber;

    printf("Enter a day number (1-7): ");
    scanf("%d", &daynumber);

    switch(daynumber) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid value");
    }

    return 0;
}

*/

// Example 2
// Write a C program in C to read any digit and display it in the word using switch-case.

/*
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number) {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default:
            printf("Invalid value");
    }

    return 0;
}

*/

// Example 3
// Write a C program to read a positive integer and calculate its factorial using a loop.

/*
int main() {

    int i, number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = number; i >= 1; i--) {
        factorial *= i;
    }

    printf("%d'nin faktöriyeli: %d\n", number, factorial);

    return 0;
}
*/

// Example 4
// Write a C program that prompts the user to enter a series of numbers until they input a negative number.Calculate and print the sum of all entered numbers using a do-while loop.

/*
int main() {

    int number, sum = 0;

    do {

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number >= 0) {
            sum = sum + number;
        }

    } while (number >= 0);

    printf("Sum: %d", sum);

    return 0;
}
*/

// Example 5
// Write a program in C to display a pattern like a right angle triangle using an asterisk.

//*
//**
//***
//****

/*
int main(){

    int i,j,star;

    printf("Enter a star value: ");
    scanf("%d",&star);

    for(i=1;i<=star;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }

    printf("\n");
    }

    return 0;

}
*/

// Example 6
// Write a C program to display a pattern like a right angle triangle with number.

//1
//12
//123
//1234

/*
int main(){

    int i,j,value;

    printf("Enter a value: ");
    scanf("%d",&value);

    for(i=1;i<=value;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    printf("\n");

    }

    return 0;

}

*/

// Example 7
// Write a C program to show the simple structure of a function by calculating the sum of two numbers using a function.

/*
int sum(int a,int b);

int main() {
    int num1,num2,result;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    result = sum(num1,num2);

    printf("The sum of %d and %d is: %d\n",num1,num2,result);

    return 0;

}

int sum(int a,int b){

    return a + b;
}
*/

// Example 8
// Write a C program in C to find the square of any number using the function.

/*
int square(int a);

int main(){
    int num,result;

    printf("Enter a number: ");
    scanf("%d",&num);

    result = square(num);

    printf("The square of %d is: %d\n",num,result);

    return 0;
}

int square(int a){

return a * a;
}
*/

// Example 9
// Write a program in C to swap two numbers using a function.

/*
void swap_and_print(int a, int b);

int main() {
    int num1, num2;

    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);

    swap_and_print(num1, num2);

    return 0;
}

void swap_and_print(int a, int b) {
    int c = a;
    a = b;
    b = c;
    printf("After swapping: num1 = %d, num2 = %d\n", a, b);
}
*/
