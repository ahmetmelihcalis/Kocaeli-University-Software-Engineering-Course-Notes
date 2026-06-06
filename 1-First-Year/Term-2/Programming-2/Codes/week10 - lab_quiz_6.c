#include <stdio.h>

// Normal Version
void generateSignal(int original[], int signal[]) {
    int i;

    signal[0] = 0;

    for (i = 1; i < 12; i++) {
        if (original[i] > original[i - 1]) {
            signal[i] = 1;
        }
        else if (original[i] < original[i - 1]) {
            signal[i] = -1;
        }
        else {
            signal[i] = 0;
        }
    }
}

int positiveSignalCount(int signal[]) {
    int i;
    int total = 0;

    for (i = 0; i < 12; i++) {
        if (signal[i] == 1) {
            total++;
        }
    }

    return total;
}

int patternControl(int signal[]) {
    int i;
    int positiveFound = 0;

    for (i = 0; i < 12; i++) {
        if (signal[i] == 1) {
            positiveFound = 1;
        }

        if (positiveFound == 1 && signal[i] == -1) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int i;
    int original[12];
    int signal[12];
    int positiveCount;
    int patternResult;

    printf("12 adet dizi elemanini giriniz:\n");

    for (i = 0; i < 12; i++) {
        scanf("%d", &original[i]);
    }

    generateSignal(original, signal);

    positiveCount = positiveSignalCount(signal);
    patternResult = patternControl(signal);

    printf("\nOriginal: ");
    for (i = 0; i < 12; i++) {
        printf("%d ", original[i]);
    }

    printf("\nSignal: ");
    for (i = 0; i < 12; i++) {
        printf("%d ", signal[i]);
    }

    printf("\nPositive count: %d", positiveCount);

    if (patternResult == 1) {
        printf("\nPattern: Exists\n");
    }
    else {
        printf("\nPattern: Does Not Exist\n");
    }

    return 0;
}

// Pointer Version

void generateSignal(int *original, int *signal) {
    int i;

    *(signal + 0) = 0;

    for (i = 1; i < 12; i++) {
        if (*(original + i) > *(original + i - 1)) {
            *(signal + i) = 1;
        }
        else if (*(original + i) < *(original + i - 1)) {
            *(signal + i) = -1;
        }
        else {
            *(signal + i) = 0;
        }
    }
}

int positiveSignalCount(int *signal) {
    int i;
    int total = 0;

    for (i = 0; i < 12; i++) {
        if (*(signal + i) == 1) {
            total++;
        }
    }

    return total;
}

int patternControl(int *signal) {
    int i;
    int positiveFound = 0;

    for (i = 0; i < 12; i++) {
        if (*(signal + i) == 1) {
            positiveFound = 1;
        }

        if (positiveFound == 1 && *(signal + i) == -1) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int i;
    int original[12];
    int signal[12];
    int positiveCount;
    int patternResult;

    printf("12 adet dizi elemanini giriniz:\n");

    for (i = 0; i < 12; i++) {
        scanf("%d", original + i);
    }

    generateSignal(original, signal);

    positiveCount = positiveSignalCount(signal);
    patternResult = patternControl(signal);

    printf("\nOriginal: ");
    for (i = 0; i < 12; i++) {
        printf("%d ", *(original + i));
    }

    printf("\nSignal: ");
    for (i = 0; i < 12; i++) {
        printf("%d ", *(signal + i));
    }

    printf("\nPositive count: %d", positiveCount);

    if (patternResult == 1) {
        printf("\nPattern: Exists\n");
    }
    else {
        printf("\nPattern: Does Not Exist\n");
    }

    return 0;
}
