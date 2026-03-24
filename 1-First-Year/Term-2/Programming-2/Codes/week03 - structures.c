#include <stdio.h>
#include <stdlib.h>

// Example 1
// Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.

/*
struct Student {
    int age;
    char name[50];
    float totalMarks;
};

int main() {
    struct Student student1, student2;

    printf("Input student1 details:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%f", &student1.totalMarks);

    printf("\nInput student2 details:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%f", &student2.totalMarks);

    printf("\n--- Student 1 Information ---\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);

    printf("\n--- Student 2 Information ---\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);


    float averageMarks = (student1.totalMarks + student2.totalMarks) / 2;
    printf("\nAverage Total Marks: %.2f\n", averageMarks);

    return 0;
}
*/

// Example 2
// Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format.

/*
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time time1, time2, result;

    printf("Input the first time (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Input the second time (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    result.seconds = time1.seconds + time2.seconds;
    result.minutes = time1.minutes + time2.minutes + result.seconds / 60;
    result.hours = time1.hours + time2.hours + result.minutes / 60;

    result.minutes %= 60;
    result.seconds %= 60;

    printf("\nResultant Time: %d:%d:%d\n", result.hours, result.minutes, result.seconds);

    return 0;
}
*/

// Example 3
//Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.

/*
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book book1, book2, book3;
    struct Book max, min;

    printf("Input Details for 3 Books");

    printf("\nBook 1 Title: ");
    scanf("%s", book1.title);
    printf("Book 1 Author: ");
    scanf("%s", book1.author);
    printf("Book 1 Price: ");
    scanf("%f", &book1.price);

    printf("\nBook 2 Title: ");
    scanf("%s", book2.title);
    printf("Book 2 Author: ");
    scanf("%s", book2.author);
    printf("Book 2 Price: ");
    scanf("%f", &book2.price);

    printf("\nBook 3 Title: ");
    scanf("%s", book3.title);
    printf("Book 3 Author: ");
    scanf("%s", book3.author);
    printf("Book 3 Price: ");
    scanf("%f", &book3.price);

    if (book1.price >= book2.price && book1.price >= book3.price)
        max = book1;
    else if (book2.price >= book1.price && book2.price >= book3.price)
        max = book2;
    else
        max = book3;

    if (book1.price <= book2.price && book1.price <= book3.price)
        min = book1;
    else if (book2.price <= book1.price && book2.price <= book3.price)
        min = book2;
    else
        min = book3;

    printf("\nMost Expensive Book:");
    printf("\nTitle: %s | Author: %s | Price: %.2f", max.title, max.author, max.price);

    printf("\n\nLowest Priced Book:");
    printf("\nTitle: %s | Author: %s | Price: %.2f", min.title, min.author, min.price);

    return 0;
}
*/

// Example 4
// Define a structure named Circle to represent a circle with a radius. Write a C program to calculate the area and perimeter of two circles and display the results.

/*
struct Circle {
    double radius;
};

int main() {
    struct Circle circle1, circle2;
    double area1, area2;
    double perimeter1, perimeter2;

    printf("Input details for Circle 1:\n");
    printf("Radius: ");
    scanf("%lf", &circle1.radius);

    printf("\nInput details for Circle 2:\n");
    printf("Radius: ");
    scanf("%lf", &circle2.radius);

    area1 = (circle1.radius) * (circle1.radius) * 3.14;
    area2 = (circle2.radius) * (circle2.radius) * 3.14;

    perimeter1 = 2 * 3.14 * circle1.radius;
    perimeter2 = 2 * 3.14 * circle2.radius;

    printf("\nResults for Circle 1\n");
    printf("Area: %.2lf\n", area1);+
    printf("Perimeter: %.2lf\n", perimeter1);

    printf("\nResults for Circle 2\n");
    printf("Area: %.2lf\n", area2);
    printf("Perimeter: %.2lf\n", perimeter2);

    return 0;
}
*/
