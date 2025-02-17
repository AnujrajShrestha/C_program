#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20]
}student;

int main() {
    int i, j;
    student st[10];
    char temp[20];

    printf("Enter the names of ten students:\n");
    for (i = 0; i < 10; i++) {
        scanf("%s", st[i].name);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(st[i].name, st[j].name) > 0) {
                strcpy(temp, st[i].name);
                strcpy(st[i].name, st[j].name);
                strcpy(st[j].name, temp);
            }
        }
    }

    printf("\nThe names of students in alphabetical order are:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", st[i].name);
    }

    return 0;
}
