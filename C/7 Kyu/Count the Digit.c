int nbDig(int n, int d)
{
  unsigned short counter = (d == 0) ? 1 : 0;
  for (unsigned short i = 1; i <= n; i++)
  {
    int ii = i * i;
    while (ii != 0)
    {
      if (ii % 10 == d)
        counter++;
      ii /= 10;
    }
  }
  return counter;
}
