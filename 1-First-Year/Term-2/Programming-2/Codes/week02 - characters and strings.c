#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Example 1
// Write a program in C to input a string and print it.

/*
int main() {
    char str[50];

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    printf("The string you entered is : %s\n", str);

	return 0;
}
*/

// Example 2
// Write a program in C to find the length of a string without using library function.

/*
int main() {
    char str[100];
    int length = 0;

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);


    for(int i = 0; (str[i] != '\0' && str[i] != '\n'); i++){
        length++;
    }

    printf("String length: %d\n", length);

    return 0;
}
*/

// Example 3
// Write a program in C to separate individual characters from a string.

/*
int main(){

    char str[100];

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);


    for(int i = 0; (str[i] != '\0' && str[i] != '\n'); i++) {
        printf("%c ", str[i]);
    }

    return 0;
}
*/

// Example 4
// Write a program in C to print individual characters of a string in reverse order.

/*
int main() {

    char str[100];
    int length, i;

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    length = strlen(str);

    for (i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }

	return 0;
}
*/

// Example 5
// Write a program in C to count the total number of words in a string.

/*
int main() {
    char str[100];
    int count = 0;

    printf("Input the string: ");
    fgets(str, sizeof str, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') || (str[i] != ' ' && str[i] != '\n' && str[i-1] == ' ')) {
            count++;
        }
    }

    printf("Total number of words: %d\n", count);

    return 0;
}
*/

// Example 6
// Write a program in C to compare two strings without using string library functions.

/*
int main() {
    char str1[100], str2[100];
    int isEqual = 1;

    printf("Input the first string : ");
    scanf("%s", str1);

    printf("Input the second string: ");
    scanf("%s", str2);

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            isEqual = 0;
            break;
    }

    if (isEqual == 1) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}
*/

// Example 7
// Write a program in C to convert a string to uppercase.

/*
int main() {
    char str_char;
    char str[100];

    printf(" Input a string in lowercase : ");
    fgets(str, sizeof str, stdin);

    for (int ctr = 0; str[ctr] != '\0'; ctr++) {
        str_char = str[ctr];
        putchar(toupper(str_char));
    }

    return 0;
}
*/
