#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showNotes(char **titles, char **contents, int count) {
    int i;

    printf("All Notes\n");

    for (i = 0; i < count; i++) {
        printf("Note %d\n", i + 1);
        printf("Title: %s\n", titles[i]);
        printf("Content: %s\n", contents[i]);
    }
}

int main() {
    int n, i;
    char temp[500];
    FILE *file;

    printf("How many notes will be entered? ");
    scanf("%d", &n);
    getchar();

    char **titles = (char **)malloc(n * sizeof(char *));
    char **contents = (char **)malloc(n * sizeof(char *));

    for (i = 0; i < n; i++) {
        printf("Title of note %d: ", i + 1);

        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';

        titles[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(titles[i], temp);

        printf("Content of note %d: ", i + 1);

        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';

        contents[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(contents[i], temp);
    }

    showNotes(titles, contents, n);

    file = fopen("notes.txt", "w");

    if (file != NULL) {
        for (i = 0; i < n; i++) {
            fprintf(file, "Title: %s\n", titles[i]);
            fprintf(file, "Content: %s\n", contents[i]);
        }
        fclose(file);
    }

    printf("\nRead from File:\n");
    file = fopen("notes.txt", "r");
    if (file != NULL) {
        while (fgets(temp, sizeof(temp), file) != NULL) {
            printf("%s", temp);
        }
        fclose(file);
    }

    char keyword[100];

    printf("\nWord to search in notes: ");

    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    int found = 0;
    for (i = 0; i < n; i++) {
        if (strstr(titles[i], keyword) != NULL || strstr(contents[i], keyword) != NULL) {
            printf("Matching note found:\n");
            printf("Title: %s\n", titles[i]);
            printf("Content: %s\n", contents[i]);
            found = 1;
        }
    }

    if (found == 0) {
        printf("No matching note found.\n");
    }

    for (i = 0; i < n; i++) {
        free(titles[i]);
        free(contents[i]);
    }
    free(titles);
    free(contents);

    return 0;
}
