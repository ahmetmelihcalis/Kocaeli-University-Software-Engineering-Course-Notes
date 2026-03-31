#include <stdio.h>
#include <stdlib.h> 

// Example 1
// Write a program in C to create and store information in a text file.
/*
int main() {
    FILE *filePointer;
    char str[50];

    filePointer = fopen("test.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Input a sentence for the file: ");
    fgets(str, sizeof str, stdin);
    fprintf(filePointer, "%s", str);

    fclose(filePointer);
    
    printf("Information saved to test.txt\n");
    
    return 0;
}
*/

// Example 2
// Write a program in C to read an existing file.

int main() {
    FILE *filePointer;
    char str[50];

    filePointer = fopen("test.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of the file:\n");
    while (fgets(str, sizeof str, filePointer) != NULL) {
        printf("%s", str);
    }

    fclose(filePointer);
    
    return 0;
}
    

