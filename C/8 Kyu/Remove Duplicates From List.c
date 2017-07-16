int *distinct(const int *values, size_t count, size_t *pResultCount)
{
  int *pResult = (int *)malloc(sizeof(int)*count);
  int i, j, count2;
  for(i = 0; i < count; i++)
  { 
    count2 = 1;
    for(j = 0; j < *pResultCount; j++)
    {
      if(values[i] == pResult[j])
      {  
        count2 = 0; 
      }
    }
    if(count2)
    {
       pResult[(*pResultCount)] = values[i];
       (*pResultCount)++;   
    }
  }
  return pResult;
}
