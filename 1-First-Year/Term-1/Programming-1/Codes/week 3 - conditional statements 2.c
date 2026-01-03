#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below.

// - Temp < 0 then Freezing weather.
// - Temp 0-10 then Very Cold weather.
// - Temp 10-20 then Cold weather.
// - Temp 20-30 then Normal in Temp.
// - Temp 30-40 then It is Hot.
// - Temp >= 40 then It is Very Hot.

/*
int main()
{
    int tmp;

    printf("Enter temperature in centigrade: ");
    scanf("%d", &tmp);

    if (tmp < 0)
        printf("Freezing weather.\n");
    else if (tmp < 10)
        printf("Very cold weather.\n");
    else if (tmp < 20)
        printf("Cold weather.\n");
    else if (tmp < 30)
        printf("Normal in temp.\n");
    else if (tmp < 40)
        printf("It's Hot.\n");
    else
        printf("It's very hot.\n");

    return 0;
}
*/


// Example 2
// Write a C program to check whether a character is an alphabet,digit or special character.

/*
int main(){

    char character;

    printf("Enter a character: ");
    scanf("%c",&character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        printf("This is an alphabet.");
    else if (character >= '0' && character <= '9')
        printf("This is a digit.");
    else
        printf("This is a special character.");

    return 0;

}

*/

// Example 3
// Write a C program to check whether an alphabet is a vowel or a consonant

/*
int main() {

    char character;

    printf("Enter a character: ");
    scanf("%c",&character);

    if (((character == 'a') || (character == 'e') || (character == 'o') || (character == 'u') || (character == 'i')) || ((character == 'A') || (character == 'E') || (character == 'O') || (character == 'U') || (character == 'I')))
        printf("This is a vowel.\n");
    else
        printf("This is a consonant.\n");

    return 0;

}
*/

// Example 4
// Write a C program to read the marks of a student and display the grade according to the following conditions:

// - Marks >= 90 == Grade A
// - Marks 80-89 == Grade B
// - Marks 70-79 == Grade C
// - Marks 60-69 == Grade D
// - Marks <60 == Grade F

/*
int main (){

    int marks;

    printf("Enter a mark: ");
    scanf("%d",&marks);

    if (marks >= 90 && marks <= 100)
        printf("Grade A\n");
    else if (marks >= 80 && marks <= 89)
        printf("Grade B\n");
    else if (marks >= 70 && marks <= 79)
        printf("Grade C\n");
    else if (marks >= 60 && marks <= 69)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;

}
*/

// Example 5
// Write a C program to check whether a given number is divisible by 5 and 11.

/*
int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number % 11 == 0) && (number % 5 == 0))
        printf("The number is divisible by both 5 and 11.\n");
    else
        printf("The number is not divisible by both 5 and 11.\n");

    return 0;
}
*/

// Example 6
// Write a C program to read coordinates (x,y) and determine in which quadrant the point lines.

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


// Example 7
// Write a C program to calculate profit and loss on transaction.

/*
int main() {

    int costPrice, sellingPrice, profitOrLoss;

    printf("Enter the Cost Price: ");
    scanf("%d", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%d", &sellingPrice);

    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        printf("You made a profit of: %d\n", profitOrLoss);
    }
    else if (sellingPrice < costPrice) {
        profitOrLoss = costPrice - sellingPrice;
        printf("You incurred a loss of: %d\n", profitOrLoss);
    }
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
*/

// Example 8
// Write a C program to check whether a given number has 3 digits or not.

/*
int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 100 && number <= 999)
        printf("Number has 3 digits.\n");
    else
        printf("Number does not have 3 digits.\n");

    return 0;
}
*/







