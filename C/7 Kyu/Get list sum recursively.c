int sumR (int *array, int n)
{
  if (n == 0 )      return 0;
  else if (n == 1)  return array[n-1];
  else              return sumR(array, n-1) + array[n-1];
}
