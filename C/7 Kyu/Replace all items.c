int *replaceAll (int *array, int n, int old, int new)
{
  for (int i=0;i<n;++i)
    if (array[i] == old)
      array[i] = new;
  return array;
}
