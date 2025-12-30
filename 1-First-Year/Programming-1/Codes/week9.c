#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a program in C to sort elements of an array in ascending order.

/*
int main(){

    int n, temp;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter numbers: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("New array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

*/

// Function solution

/*
void sortIt();
void writeTheArray();

int numbers[7];
int i;

int main(){

    printf("Enter numbers: \n");
    for(i=0; i<7; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Before sorting\n");
    writeTheArray();

    sortIt();

    printf("After sorting\n");
    writeTheArray();

    return 0;
}

void sortIt(){
    int j;
    int reserve;

    for(i=0; i<7; i++){
        for(j=i+1; j<7; j++){

            if (numbers[j] < numbers[i]) {
                reserve = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = reserve;
            }
        }
    }
}

void writeTheArray(){
    for(i=0; i<7; i++){
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

*/

// Example 2
// Write a program in C to sort elements of an array in ascending order.

/*
int main(){

    int n, temp;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter numbers: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("New array: ");
    for(int i = n-1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
*/

// Function solution
/*
void sortIt();
void writeTheArrayReverse();

int numbers[7];
int i;

int main(){

    printf("Enter numbers: \n");
    for(i=0; i<7; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Before sorting\n");
    writeTheArrayReverse();

    sortIt();

    printf("After sorting\n");
    writeTheArrayReverse();

    return 0;
}

void sortIt(){
    int j;
    int reserve;

    for(i=0; i<7; i++){
        for(j=i+1; j<7; j++){

            if (numbers[j] < numbers[i]) {
                reserve = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = reserve;
            }
        }
    }
}

void writeTheArrayReverse(){
    for(i=6; i>=0; i--){
        printf("%d ", numbers[i]);
    }

    printf("\n");
}
*/

// Example 3
// Write a program in C to seperate odd and even integers into seperate arrays.

/*
int main (){

    int i;
    int even = 0, odd = 0;

    int a[7];
    int b[7];
    int c[7];

    printf("Enter numbers: \n");
    for(i=0; i<7; i++){
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0){
            b[even] = a[i];
            even = even + 1;
        }
        else{
            c[odd] = a[i];
            odd = odd + 1;
        }
    }

    printf("Even numbers: ");

    for (i=0; i<even; i++){
        printf("%d ", b[i]);
    }
    printf("\n");

    printf("Odd numbers: ");

    for (i=0; i<odd; i++){
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}

*/

// Example 4
// Write a program in C to delete an element at a desired position from an array.

/*
int main() {
    int a[100];
    int i, n, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d",&position);

        for (i = position - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
            n--;

            printf("New array: ");
            for(i = 0; i < n; i++) {
                printf("%d ", a[i]);
        }
            printf("\n");

    return 0;
}

*/

// Example 5
// Write a program in C to insert the values in the array(sorted list)

/*
int main() {
    int n, i, value, position;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for (i = 0; i < n; i++) {
        if (value < a[i]) {
            break;
        }
    }
    position = i;

    for (i = n; i > position; i--) {
        a[i] = a[i-1];
    }

    a[position] = value;
    n++;

    printf("New Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
*/

// Single for loop solution
/*
int main() {
    int n, i, val;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (i = n - 1; (i >= 0 && arr[i] > val); i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = val;
    n++;

    printf("New Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/

// Example 6
// Write a program in C to insert the values in the array(unsorted list)

/*
int main() {

    int n, i, value;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n+1];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    a[n] = value;
    n++;

    printf("New Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

// OR


int main() {
    int n, i, j, value, temp;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d unsorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted List: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (i = n - 1; (i >= 0 && a[i] > value); i--) {
        a[i + 1] = a[i];
    }

    a[i + 1] = value;
    n++;

    printf("New Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

*/

// Example 7
// Write a program in C to find the second largest element in an array.

/*

int main() {
    int n, i;
    int a[100];

    int max1 = 0;
    int max2 = 0;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {

        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }

        else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    printf("The First Largest: %d\n", max1);
    printf("The Second Largest: %d\n", max2);

    return 0;
}

*/

// Example 8
// Write a program in C to find the second smallest element in an array.

/*
int main() {
    int n, i;
    int a[100];
    int min1, min2;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (a[0] < a[1]) {
        min1 = a[0];
        min2 = a[1];
    } else {
        min1 = a[1];
        min2 = a[0];
    }

    for(i = 2; i < n; i++) {

        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        }

        else if (a[i] < min2 && a[i] != min1) {
            min2 = a[i];
        }
    }

    printf("The Smallest Element: %d\n", min1);
    printf("The Second Smallest Element: %d\n", min2);

    return 0;
}

*/
