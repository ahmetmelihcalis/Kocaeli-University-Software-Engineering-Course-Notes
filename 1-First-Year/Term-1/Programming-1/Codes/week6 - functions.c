#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write program in C show the sum of two number with function.

/*
int sum(int a,int b);

int main(){

    int number1,number2,result;

    printf("Enter the first number: ");
    scanf("%d",&number1);

    printf("Enter the second number: ");
    scanf("%d",&number2);

    result = sum(number1,number2);

    printf("The sum is: %d",result);

    return 0;

}

int sum(int a,int b){

return a + b;

}
*/

// Example 2
// Write a program in C find the square of any number using a function.

/*
int square(int a);

int main(){

    int number,result;

    printf("Enter a number: ");
    scanf("%d",&number);

    result = square(number);

    printf("The square of %d is: %d\n",number,result);

    return 0;

}

int square(int a){

return a * a;
}
*/

// Example 3
// Write a program in C to swap two number using a function.

/*
void swap_and_print(int a, int b);

int main() {

    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    swap_and_print(number1, number2);

    return 0;
}

void swap_and_print(int a, int b) {
    int c = a;
    a = b;
    b = c;

    printf("After swapping number1 is %d, number2 is %d.", a, b);
}
*/

// Example 4
// Write a program in C to check if a given number is even or odd using the function.

/*
int even_or_odd (int a);

int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if (even_or_odd(number)){
        printf("%d is even",number);
    }
    else
        printf("%d is odd",number);

    return 0;

}

int even_or_odd(int a){

    return (a % 2 == 0);
}
*/

// Example 5
// Write a program in C to check whether a number is a prime or not using a function.

/*
int isPrime(int number);

int main(){

int number;

printf("Enter a number: ");
scanf("%d",&number);

if (isPrime(number))
    printf("%d is a prime number.",number);
else
    printf("%d is not prime number.",number);

    return 0;

}

int isPrime(int n) {

    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}
*/

// Example 6
// Write a program in C find the largest of two numbers entered by user.

/*
int main(){

    int number1,number2;

    printf("Enter the first number: ");
    scanf("%d",&number1);

    printf("Enter the second number: ");
    scanf("%d",&number2);

    if (number1 > number2)
        printf("number1 is bigger than number2.");
    else if (number2 > number1)
        printf("number2 is bigger than number1.");
    else
        printf("number1 = number2");

    return 0;
}
*/

// Example 7
// Write a program in C find the factorial of entered by user using the function.

/*
int factorial(int n);

int main() {

    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = factorial(number);

    printf("%d factorial is: %d", number, result);

    return 0;
}

int factorial(int n) {

    int i, result = 1;

    for (i = n; i >= 1; i--) {
        result = result * i;
    }

    return result;
}
*/

// Example 8
// Write a program in C to check for Armstrong and Perfect numbers using functions.

//Armstrong Number: A number that is equal to the sum of its digits raised to the power of the number of digits.
// Example: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

//Perfect Number: A positive integer that is equal to the sum of its proper divisors (excluding the number itself).
//Example: Divisors of 28 are 1, 2, 4, 7, 14.Sum: 1 + 2 + 4 + 7 + 14 = 28

/*
#include <math.h>

int checkArmstrong(int n) {
    int originalNum = n;
    int remainder, sum = 0;
    int digits = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = n;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int checkPerfect(int n) {
    int i, sum = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main() {
    int number;

    printf("Input any number: ");
    scanf("%d", &number);

    if (checkArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    if (checkPerfect(number)) {
        printf("%d is a Perfect number.\n", number);
    } else {
        printf("%d is not a Perfect number.\n", number);
    }

    return 0;
}
*/

// Example 9
// Write a program in C to convert a decimal to binary number using the function. (Recursion)

/*
void decimal_to_binary(int n);

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary: ");
    decimal_to_binary(number);

    return 0;
}

void decimal_to_binary(int n) {

    if (n == 0)
        return;

    decimal_to_binary(n / 2);

    printf("%d", n % 2);
}
*/
