#include <stddef.h>

int elimination(const int *arr, size_t arr_size, int* result)
{
  for(size_t i = 0; i < arr_size; ++i)
      for(size_t j = i + 1; j < arr_size; ++j)
          if (arr[i] == arr[j])
            { *result = arr[i]; return 1; }
  return 0;
}
