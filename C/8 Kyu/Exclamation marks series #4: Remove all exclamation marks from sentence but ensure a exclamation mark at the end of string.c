#include <string.h>

char* remove_bang(char* s)
{
    int pos = 0;
    char *out = malloc(strlen(s) * sizeof(char));
    
    while(*s != '\0')
    {
       if(*s != '!')
          out[pos++] = *s;
       s++;
    }
    
    out[pos++] = '!';
    out[pos]   = '\0';
    return out;
}
