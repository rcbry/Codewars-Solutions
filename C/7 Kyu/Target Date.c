#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* dateNbDays(double a0, double a, double p) {
    int nbDays;
    struct tm date = {0};
    date.tm_year = 116;
    date.tm_mon  = 0;
    date.tm_mday = 1;
    for(nbDays = 0; a0 < a; nbDays++)
        a0 += a0 * (p / 36000);
    date.tm_mday += nbDays;
    mktime(&date);
    char* buffer = malloc(11);
    strftime(buffer, 11, "%Y-%m-%d", &date);
    return buffer;
}
