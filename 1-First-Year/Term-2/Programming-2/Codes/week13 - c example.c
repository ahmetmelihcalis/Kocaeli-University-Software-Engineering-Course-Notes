#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findWord(char words[][51], int wordCount, char targetWord[]);
void sortWords(char words[][51], int frequencies[], int wordCount);

int main() {
    char fileName[100];
    char words[100][51];
    char currentWord[51];

    int frequencies[100];
    int wordCount = 0;
    int minimumFrequency;
    int foundIndex;
    int i;

    FILE *inputFile;
    FILE *reportFile;

    printf("Enter the file name: ");
    scanf("%s", fileName);

    printf("Enter the minimum frequency value: ");
    scanf("%d", &minimumFrequency);

    inputFile = fopen(fileName, "r");

    if (inputFile == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while (fscanf(inputFile, "%s", currentWord) == 1) {
        foundIndex = findWord(words, wordCount, currentWord);

        if (foundIndex == -1) {
            strcpy(words[wordCount], currentWord);
            frequencies[wordCount] = 1;
            wordCount++;
        } else {
            frequencies[foundIndex]++;
        }
    }

    fclose(inputFile);

    sortWords(words, frequencies, wordCount);

    reportFile = fopen("report.txt", "w");

    if (reportFile == NULL) {
        printf("Report file could not be created.\n");
        return 1;
    }

    printf("\nWord Frequency\n");

    fprintf(reportFile, "Word Frequency\n");

    for (i = 0; i < wordCount; i++) {
        if (frequencies[i] >= minimumFrequency) {
            printf("%s %d\n", words[i], frequencies[i]);
            fprintf(reportFile, "%s %d\n", words[i], frequencies[i]);
        }
    }

    fclose(reportFile);

    return 0;
}

int findWord(char words[][51], int wordCount, char targetWord[]) {
    int i;

    for (i = 0; i < wordCount; i++) {
        if (strcmp(words[i], targetWord) == 0) {
            return i;
        }
    }

    return -1;
}

void sortWords(char words[][51], int frequencies[], int wordCount) {
    int i;
    int j;
    int tempFrequency;
    char tempWord[51];

    for (i = 0; i < wordCount - 1; i++) {
        for (j = 0; j < wordCount - 1 - i; j++) {
            if (frequencies[j] < frequencies[j + 1]) {
                tempFrequency = frequencies[j];
                frequencies[j] = frequencies[j + 1];
                frequencies[j + 1] = tempFrequency;

                strcpy(tempWord, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], tempWord);
            }
        }
    }
}
