#include <stdio.h>
#include <stdlib.h>

// Example 1
// Create a structure named Complex to represent a complex number with real and imaginary parts. Write a C program to add and multiply two complex numbers.
/*
struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex number1, number2, sum, product;

    printf("1. karmasik sayinin reel ve sanal kisimlarini giriniz: ");
    scanf("%f %f", &number1.real, &number1.imaginary);

    printf("2. karmasik sayinin reel ve sanal kisimlarini giriniz: ");
    scanf("%f %f", &number2.real, &number2.imaginary);

    printf("1. karmasik sayi: %.2f + %.2fi\n", number1.real, number1.imaginary);
    printf("2. karmasik sayi: %.2f + %.2fi\n", number2.real, number2.imaginary);

    sum.real = number1.real + number2.real;
    sum.imaginary = number1.imaginary + number2.imaginary;

    product.real = (number1.real * number2.real) - (number1.imaginary * number2.imaginary);
    product.imaginary = (number1.real * number2.imaginary) + (number1.imaginary * number2.real);

    printf("Toplam: %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Carpim: %.2f + %.2fi\n", product.real, product.imaginary);

    return 0;
}
*/

// Example 2
// Design a structure named "Car" to store details like car ID, model, and rental rate per day. Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results.
/*
struct Car {
    int carID;
    char carModel[20];
    float rentPrice;
};

int main() {

    struct Car car1, car2, car3;
    int rentDay;

    printf("1.Arabanin bilgilerini giriniz:\n");
    printf("Araba ID: ");
    scanf("%d", &car1.carID);
    printf("Model: ");
    scanf("%s", car1.carModel);
    printf("Gunluk Kiralama Ucreti: ");
    scanf("%f", &car1.rentPrice);

    printf("2.Arabanin bilgilerini giriniz:\n");
    printf("Araba ID: ");
    scanf("%d", &car2.carID);
    printf("Model: ");
    scanf("%s", car2.carModel);
    printf("Gunluk Kiralama Ucreti: ");
    scanf("%f", &car2.rentPrice);

    printf("3.Arabanin bilgilerini giriniz:\n");
    printf("Araba ID: ");
    scanf("%d", &car3.carID);
    printf("Model: ");
    scanf("%s", car3.carModel);
    printf("Gunluk Kiralama Ucreti: ");
    scanf("%f", &car3.rentPrice);

    printf("Gun sayisini giriniz: ");
    scanf("%d", &rentDay);

    printf("%s model %d ID'li araba icin %d gunluk toplam ucret: %.2f\n",car1.carModel, car1.carID, rentDay, car1.rentPrice * rentDay);

    printf("%s model %d ID'li araba icin %d gunluk toplam ucret: %.2f\n",car2.carModel, car2.carID, rentDay, car2.rentPrice * rentDay);

    printf("%s model %d ID'li araba icin %d gunluk toplam ucret: %.2f\n",car3.carModel, car3.carID, rentDay, car3.rentPrice * rentDay);

    return 0;
}
*/
