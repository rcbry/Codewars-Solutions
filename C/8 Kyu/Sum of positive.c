int positive_sum(const int *values, size_t count)
{
  int i,sum=0;
  
  for (i=0;i<count;i++)
  {
    if (values[i]<=0) continue;
    else sum+=values[i];
  }
    
  return sum;
}
