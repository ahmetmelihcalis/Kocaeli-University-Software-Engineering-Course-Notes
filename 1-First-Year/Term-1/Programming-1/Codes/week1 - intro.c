#include <stdio.h>
#include <stdlib.h>

// Example 1
//"Write a C program that prints "Hello C" to the screen.

/*
int main()
{
    printf("Hello C");
    return 0;
}

*/

// Example 2
// Write a C program that takes two numbers as input and prints their sum on the screen.

/*
int main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum: %d", sum);

    return 0;
}

*/


// Example 3
// Write a C program that takes two numbers as input and prints their average on the screen.

/*
int main()
{
    float num1, num2, average;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    average = (num1 + num2) / 2;

    printf("Average: %f", average);

    return 0;
}
*/

// Example 4
// Write a C program that takes the side lengths of a rectangle as input and calculates and prints its perimeter and area on the screen.

/*
int main() {
    int side1, side2, perimeter, area;

    printf("Enter side 1: ");
    scanf("%d", &side1);

    printf("Enter side 2: ");
    scanf("%d", &side2);

    perimeter = (side1 + side2) * 2;
    area = side1 * side2;

    printf("Perimeter: %d\n", perimeter);
    printf("Area: %d\n", area);

    return 0;
}
*/

// Example 5
// Write a C program that takes the radius of a circle as input and prints its circumference and area.

/*
int main ()
{
    float r,circumference,area;

    printf("Enter radius: ");
    scanf("%f",&r);

    circumference = 2 * 3.14 * r;
    area = 3.14 * r * r;

    printf("Circumference: %f\n", circumference);
    printf("Area: %f\n", area);

    return 0;
}
*/

// Example 6
// Write a C program that takes a Celsius temperature as input and converts it to Fahrenheit.

/*
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Celsius %f = Fahrenheit %f \n", celsius, fahrenheit);

    return 0;
}
*/

// Example 7
// Write a C program that takes an input time in seconds and converts it into minutes and seconds.

/*
int main()
{
    int totalSeconds, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("%d seconds = %d minutes and %d seconds\n", totalSeconds, minutes, seconds);

    return 0;
}
*/
