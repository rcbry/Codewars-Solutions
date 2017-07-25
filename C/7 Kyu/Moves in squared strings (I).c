#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* vertMirror(char* strng) {
    int len = strlen(strng); int lg = 0;
    char** words = split(strng, "\n", &lg);
    char* sb = (char*)malloc(sizeof(char) * (len + 1));
    char* res = sb;
    for (int i = 0; i < lg; i++) {
        char* w = words[i];
        for (int j = strlen(w) - 1; j >= 0; j--, sb++) {
            *sb = w[j];
        }
        if (i < lg - 1) {
            *sb = '\n';
            sb++;
        }
    }
    *sb = '\0';
    free(words); words = NULL;
    return res;
}
char* horMirror(char* strng) {
    int len = strlen(strng); int lg = 0;
    char** words = split(strng, "\n", &lg);
    char* sb = (char*)malloc(sizeof(char) * (len + 1));
    *sb = '\0';
    for (int i = lg; i >= 1; i--) {
        strcat(sb, words[i - 1]);
        if (i > 1)
            strcat(sb, "\n");
    }
    free(words); words = NULL;
    return sb;
}
typedef char* (*generic_func_t) (char*);
char* oper(generic_func_t f, char* s) {
    return f(s);
}
