#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 201
#define M 3
#define MAXCHAR 100

int main(void) {
    double data[N][M];

    char buffer[MAXCHAR];
    int row = 0;
    int column = 0;
    char *ptr;

    char fn[] = "data.csv";
    FILE *fptr;
    fptr = fopen(fn, "r");
    while (fgets(buffer, MAXCHAR, fptr)) {
        column = 0;
        row++;
        if (row == 1) {
            continue;
        }
        char *value = strtok(buffer, ", ");
        while (value) {
            data[row - 2][column] = strtod(value, &ptr);
            value = strtok(NULL, ", ");
            column++;
        }
    }
    fclose(fptr);
    fptr = NULL;

    return EXIT_SUCCESS;
}
