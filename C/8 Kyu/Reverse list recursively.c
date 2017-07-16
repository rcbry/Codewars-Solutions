int* revR (int* array, int n)
{
  int temp; // temporary variable
  
  if(n==1)
    return array;
  if(n==0)
    return 0; // or NULL
    
  temp=array[0];
  array[0]=array[n-1]; // reverse first with last string elements
  array[n-1]=temp;

  revR(&array[1], n-2);
  
  return array;
}
