#include <stdlib.h>

typedef void* (*Function)(const void*, const void*);

void *lzip(
  const void *a, size_t a_count, size_t a_item_size,
  const void *b, size_t b_count, size_t b_item_size,
  size_t result_item_size, Function func)
{
    if(a == NULL) return NULL; 
    if(b == NULL) return NULL;
    
    int n = a_count < b_count ? a_count : b_count;    
    char** result = (char**)malloc(n * sizeof(char*));  
    
    for(size_t i = 0; i < n; ++i)
      result[i] = func(a + i * a_item_size, b + i * b_item_size);
      
    return result;
}
