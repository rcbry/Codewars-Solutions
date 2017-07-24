#include <stdlib.h>
#include <string.h>

char *center(const char *strng, int width, char fill)
{
    size_t len = strlen(strng);
    if(len >= width) return strdup(strng);
    
    char* ret = malloc(width+1);
    if(ret == NULL) return NULL;
    
    size_t missing = width-len;
    size_t to_fill = missing/2 + missing%2;
    memset(ret, fill, to_fill);
    memcpy(&ret[to_fill], strng, len);
    size_t done = to_fill+len;
    memset(ret + done, fill, width-done);
    ret[width] = '\0';
    return ret;
}
