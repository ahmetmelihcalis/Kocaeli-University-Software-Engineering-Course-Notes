#include <stdio.h>
#include <stdlib.h>

// Example 1
// Write a program in C to store elements in an array and print them.

/*
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter numbers: \n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);

    }

    return 0;
}
*/

// Example 2
// Write a program in C to read n number of values in an array and display them in reverse order.

/*
int main() {
    int n;
    printf("Enter a n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter numbers: \n");

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = n-1; i >= 0; i--)
        printf("%d ", a[i]);
}

*/

// Example 3
// Write a program in C to find the sum of all elements of the array.

/*
int main() {
    int sum = 0;
    int a[5];

    printf("Enter numbers: \n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
*/

// Example 4
// Write a program in C to copy the elements of one array into another array.

/*
int main(){

    int n;
    printf("Enter a n: ");
    scanf("%d",&n);

    int a[n],b[n];

    printf("Enter numbers: \n");

    for (int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0;i<n;i++){
        b[i] = a[i];
    }
    for (int i = 0;i<n;i++){
        printf("%d ",b[i]);
    }

    }

*/

// Example 5
// Write a program in C to count the total number of duplicate elements in array.

/*
int main(){

int n,count=0;

printf("Enter a n: ");
scanf("%d",&n);

int a[n];

printf("Enter numbers: \n");

for (int i = 0;i < n;i++){
    scanf("%d",&a[i]);
}

for(int i=0;i<n;i++){
    for (int j = i + 1; j<n;j++){
        if (a[i] ==  a[j]){
            count ++;
            break;
        }
    }
}

    printf("Number of duplicate elements: %d",count);

    return 0;

}

*/

// Example 6
// Write a program in C to find the maximum and minimum elements in array.

/*
int main(){

    int n;

    printf("Enter a n: ");
    scanf("%d",&n);

    int a[n];

    for (int i = 0;i < n;i++){
       scanf("%d",&a[i]);
    }

    int min = a[0];
    int max = a[0];

    for(int i = 1;i < n;i++){
        if (a[i] < min)
           min = a[i];
        if (a[i] > max)
            max = a[i];

    }

    printf("min: %d max: %d",min,max);

}
*/


// Example 7
// Write a program in C to seperate odd and even integers into seperate arrays.

/*
int main(){

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int a[n], b[n], c[n];
    int e = 0, o = 0;

    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0){
            b[e] = a[i];
            e++;
        }
        else{
            c[o] = a[i];
            o++;
            }
    }

    printf("Even numbers: ");
    for (int i = 0; i < e; i++)
        printf("%d ", b[i]);

    printf("\nOdd numbers: ");
    for (int i = 0; i < o; i++)
        printf("%d ", c[i]);

    return 0;
}

*/

// Example 8
// Write a program in C to print all unique elements in array.

/*
int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Unique elements: ");

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count == 1)
            printf("%d ", a[i]);
    }

    return 0;
}

*/

// Example 9
// Write a program in C to merge two arrays of the same size sorted in descending order.

/*
int main() {

    int a[10], b[10], c[20];

    printf("Enter 10 numbers for array a:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Enter 10 numbers for array b:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < 10; i++)
        c[i] = a[i];

    for (int i = 0; i < 10; i++)
        c[10 + i] = b[i];

    for (int i = 0; i < 19; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (c[i] < c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("Merged & Sorted (Descending): ");
    for (int i = 0; i < 20; i++)
        printf("%d ", c[i]);

    return 0;
}

*/

// Example 10
// Write a program in C to count the frequency of each element of an array.

/*
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    int frequency[n];

    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        frequency[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                frequency[j] = 0;
            }
        }

        if (frequency[i] != 0)
            frequency[i] = count;
    }

    printf("\nFrequencies:\n");
    for (int i = 0; i < n; i++) {
        if (frequency[i] != 0)
            printf("%d occurs %d times\n", a[i], frequency[i]);
    }

    return 0;
}

*/

// Example 11
// Write a program in C to sort elements of an array in ascending order.

/*
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted ascending:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

*/
