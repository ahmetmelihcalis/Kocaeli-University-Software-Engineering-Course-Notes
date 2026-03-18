#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a program in C to print the first 50 natural number using a recursive function.

/*
void printNaturalNumbers(int n);

int main() {
    printNaturalNumbers(1);
    return 0;
}

void printNaturalNumbers(int n){

    if (n > 50)
        return ;
    printf("%d\n",n);
    printNaturalNumbers(n+1);
}

*/

// Example 2
// Write a program in C to calculate the sum of 1 to n using recursive function.

/*
int sumNumber(int n);

int main(){

    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = sumNumber(n);

    printf("Sum: %d", sum);

    return 0;
}

int sumNumber(int n){
    if (n>0){
        return n + sumNumber(n-1);
    }
    else
        return 0;
}
*/

// Example 3
// Write a program in C to print even or odd numbers in a given range using recursive function.

/*
void printNumbers(int currentNumber, int stopNumber, int choice);

int main() {
    int start, stop, userChoice;

    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the stop number: ");
    scanf("%d", &stop);

    printf("Type 1 for ODD numbers, Type 2 for EVEN numbers: ");
    scanf("%d", &userChoice);

    printf("Result: ");

    printNumbers(start, stop, userChoice);

    return 0;
}

void printNumbers(int currentNumber, int stopNumber, int choice) {

    if (currentNumber > stopNumber) {
        return;
    }

    if (choice == 1 && currentNumber % 2 != 0) {
        printf("%d ", currentNumber);
    }

    else if (choice == 2 && currentNumber % 2 == 0) {
        printf("%d ", currentNumber);
    }

    printNumbers(currentNumber + 1, stopNumber, choice);
}
*/

// Example 4
// Write a program in C to find the factoriel of a number using recursive function.

/*
int factorial(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);

}
*/

// Example 5
// Write a program in C to print the Fibonacci series using recursive function.

/*
int fibonacci(int n);

int main() {
    int i,n;

    printf("Enter a value: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n){

    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

}
*/

// Example 6
// Write a program in C to find the sum of digits of number using recursive function.

/*
int sum_of_digits(int number);

int main(){

    int number,sum;

    printf("enter a number: ");
    scanf("%d",&number);

    sum = sum_of_digits(number);

    printf("sum of digits: %d",sum);

}

int sum_of_digits(int n){

    if (n == 0){
        return 0;
    }
    else {
        return (n % 10) + sum_of_digits(n / 10);
    }
}
*/

// while loop version

/*
int main() {
    int n, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("Sum of digits: %d", sum);

    return 0;
}
*/

// for loop version

/*
int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i = i / 10) {
        sum = sum + (i % 10);
    }

    printf("Original Number: %d\n", n);
    printf("Sum of digits: %d", sum);

    return 0;
}
*/

// Example 7
// Write a program in C to count the digits of given number using recursive function.

/*
int count_of_digits(int number);

int main(){

    int number,count;

    printf("enter a number: ");
    scanf("%d",&number);

    count = count_of_digits(number);

    printf("Count of digits: %d",count);

}

int count_of_digits(int n) {
    if (n < 10)
        return 1;

    return 1 + count_of_digits(n / 10);
}
*/

// Example 8
// Enumeration - (Short: enum): A user-defined data type that consists of a set of named integer constants.
// It is used to assign names to integral constants to make a program easier to read and maintain.

// Write a program in C to create enumareted data types for 7 days and display their values in integer constant.

/*
enum Days { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {

    printf("Monday: %d\n", Monday);
    printf("Tuesday: %d\n", Tuesday);
    printf("Wednesday: %d\n", Wednesday);
    printf("Thursday: %d\n", Thursday);
    printf("Friday: %d\n", Friday);
    printf("Saturday: %d\n", Saturday);
    printf("Sunday: %d\n", Sunday);

    return 0;
}
*/

// Example 9
// Write a program in C to check if a number is a prime number or not using recursive function.

/*
int checkPrime(int n, int i);

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = checkPrime(number, 2);

    if (result == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

int checkPrime(int n, int i) {
    if (n < 2)
        return 0;

    if (i == n)
        return 1;

    if (n % i == 0)
        return 0;

    return checkPrime(n, i + 1);
}
*/
