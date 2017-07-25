char* isSortedAndHow(int* array, int arrayLength)
{
  int asc = array[0] < array[1];
  
  for (int i = 1; i < arrayLength; i++)
    if ((asc && array[i] < array[i-1]) || (!asc && array[i] > array[i-1])) 
      return "no";
      
  return asc ? "yes, ascending" : "yes, descending";
}
