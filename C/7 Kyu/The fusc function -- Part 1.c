int fusc(int n)
{
  if (n == 0 || n == 1) return n;
  if (n % 2 == 0)       return fusc(n/2);
  if (n % 2 != 0)       return fusc(n/2) + fusc(n/2+1);
}
