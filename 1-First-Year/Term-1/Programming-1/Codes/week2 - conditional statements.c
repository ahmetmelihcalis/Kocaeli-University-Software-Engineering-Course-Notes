#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Example 1
// Write a C program whether given number is odd or even.

/*
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");

    return 0;
}
*/


// Example 2
// Write a C program whether given number a positive or negative.

/*
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
        printf("The number is positive\n");
    else if (number < 0)
        printf("The number is negative\n");
    else
        printf("The number is zero\n");

    return 0;
}

*/

// Example 3
// Write a C program to find whether a given year is a leap year or not

/*
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);

    return 0;
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("%d is a leap year\n", year);
            else
                printf("%d is not a leap year\n", year);
        }
        else
        {
            printf("%d is a leap year\n", year);
        }
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
*/

// Example 4
// Write a C program to find the largest of three numbers.

/*
int main()
{
    int number1, number2, number3;

    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);
    printf("Enter number3: ");
    scanf("%d", &number3);

    if (number1 >= number2 && number1 >= number3)
        printf("Number1 is the biggest\n");
    else if (number2 >= number1 && number2 >= number3)
        printf("Number2 is the biggest\n");
    else
        printf("Number3 is the biggest\n");

    return 0;
}
*/

// Example 5
// Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.

/*
int main()
{
    int side1, side2, side3;

    printf("Enter first side: ");
    scanf("%d", &side1);
    printf("Enter second side: ");
    scanf("%d", &side2);
    printf("Enter third side: ");
    scanf("%d", &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        if (side1 == side2 && side2 == side3)
            printf("Triangle is Equilateral.");
        else if (side1 == side2 || side1 == side3 || side2 == side3)
            printf("Triangle is Isosceles.");
        else
            printf("Triangle is Scalene.");
    }
    else
    {
        printf("Not a valid triangle.");
    }

    return 0;
}
*/

// Example 6
// Write a C program to check whether a triangle can be formed with the given values for the angles.

/*
int main() {
    int angle1, angle2, angle3;

    printf("Enter angle1: ");
    scanf("%d", &angle1);

    printf("Enter angle2: ");
    scanf("%d", &angle2);

    printf("Enter angle3: ");
    scanf("%d", &angle3);

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180))
        printf("Triangle can be formed.");
    else
        printf("Triangle cannot be formed.");

    return 0;
}
*/

// Example 7
// Write a C program to calculate the root of a quadratic equation.


// #include <math.h>

/*
int main ()
{
    double a,b,c;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0){
        root1 = (- b + sqrt(discriminant)) / (2 * a);
        root2 = (- b + sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root1 = %lf and Root2 = %lf\n", root1, root2);
    }

    else if (discriminant == 0){
        root1 = root2 = - b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %lf\n", root1);

    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %lf + %lfi and Root2 = %lf - %lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;

}
*/

// Example 8
// Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lines.

/*
int main()
{
    int x, y;

    printf("Enter X: ");
    scanf("%d", &x);

    printf("Enter Y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("The point lies in the First Quadrant.\n");
    else if (x < 0 && y > 0)
        printf("The point lies in the Second Quadrant.\n");
    else if (x < 0 && y < 0)
        printf("The point lies in the Third Quadrant.\n");
    else if (x > 0 && y < 0)
        printf("The point lies in the Fourth Quadrant.\n");
    else
        printf("The point lies on an axis.\n");

    return 0;
}
*/
