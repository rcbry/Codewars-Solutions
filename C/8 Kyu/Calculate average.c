double find_average(double *array, int length)
{
  if (length==0)
    return 0;
  double average=0;
  for (int i=0;i<length;i++)
    average = average + array[i];
  return average/length;
}
