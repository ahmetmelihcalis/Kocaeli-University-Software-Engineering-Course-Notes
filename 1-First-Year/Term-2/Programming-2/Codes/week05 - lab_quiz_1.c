/*

26.03.2026 Quiz Question

Write a C program that uses a structure to store car rental information and performs file operations using a text file.

1. Define a structure named Car with the following fields:
○ car_id
○ model
○ daily_rate
○ rental_days

2. Take information for 5 car rental records from the user. For each record, the program should ask for:
○ Car ID
○ Car Model
○ Daily Rental Rate
○ Number of Rental Days

3. Save all rental records into a text file named rental.txt.

4. Reopen the same file in read mode and read all rental records from the file.

5. Display all rental information read from the file.

6. Calculate and display the total payment for each car using the formula:
Total Payment=Daily Rate×Rental Days

7. Also calculate and display the overall total amount for all 5 rental
records.

Example Input
For 5 rental records:
● 101 Toyota 500 3
● 102 Honda 450 2
● 103 BMW 900 4
● 104 Ford 400 1
● 105 Audi 1000 2

*/

#include <stdlib.h> 
#include <stdio.h>

struct Car{
    int car_id;
    char model[50];
    float daily_rate;
    int rental_days;
};

int main()
{  
    struct Car cars[5];
    FILE *filePointer;
    filePointer = fopen("rental.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for(int i=0; i<5; i++){
        printf("Enter details for car %d:\n", i+1);
        printf("Car ID: ");
        scanf("%d", &cars[i].car_id);
        printf("Car Model: ");
        scanf("%s", cars[i].model);
        printf("Daily Rental Rate: ");
        scanf("%f", &cars[i].daily_rate);
        printf("Number of Rental Days: ");
        scanf("%d", &cars[i].rental_days);

        fprintf(filePointer, "%d %s %.2f %d\n", cars[i].car_id, cars[i].model, cars[i].daily_rate, cars[i].rental_days);
    }

    fclose(filePointer);

    filePointer = fopen("rental.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nRental Records:\n");
    float overall_total = 0.0;
    while(fscanf(filePointer, "%d %s %f %d", &cars[0].car_id, cars[0].model, &cars[0].daily_rate, &cars[0].rental_days) != EOF){
        float total_payment = cars[0].daily_rate * cars[0].rental_days;

        overall_total += total_payment;

        printf("Car ID: %d, Model: %s, Daily Rate: %.2f, Rental Days: %d, Total Payment: %.2f\n",cars[0].car_id, cars[0].model, cars[0].daily_rate, cars[0].rental_days, total_payment);
    }

    printf("\nOverall Total Amount for all rentals: %.2f\n", overall_total);

    fclose(filePointer);
    
    return 0;
}
