#include <string.h>

int find_longest(int *numbers, size_t numbers_size)
{
    int max = 0;
    for(size_t i = 0; i < numbers_size; i++)
    {
      char temp1[20] = {0}, temp2[20] = {0};
      sprintf (temp1, "%d", abs(numbers[i]));
      sprintf (temp2, "%d", abs(numbers[max]));
      if(strlen(temp1) >  strlen(temp2)) max = i;
    }
    return numbers[max];
}
