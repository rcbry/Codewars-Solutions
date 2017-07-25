#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findIndex(char* array[], int sz, char* target);
char* rotate(char* s, int i);

// sz is size of arr
int containAllRots(char* strng, char* arr[], int sz) {
    if (strcmp(strng, "") == 0) return 1;
    for (size_t i = 0; i < strlen(strng); i++) {
        char* r = rotate(strng, i);
        int it = findIndex(arr, sz, r);
        free(r); r = NULL;
        if (it == -1) return 0;
    }
    return 1;
}
