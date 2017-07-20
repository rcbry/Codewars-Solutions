int nbYear(int p0, double percent, int aug, int p)
{
  int years = 0;
  while (1)
  {
    p0 = p0 + p0 * percent / 100 + aug;
    years++;
    if (p0 >= p)
      break;
  }
  return years;
}
