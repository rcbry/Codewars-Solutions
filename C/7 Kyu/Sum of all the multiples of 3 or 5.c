int findSum (int n)
{
  int sum=0; // sum of all the multiples of 3 and/or 5
  for (int i=0;i<=n;++i)
  {
    if (i%3==0)
      sum+=i;
    else if (i%5==0)
      sum+=i;
  }
  return sum;
}
