int slicecake(int n)
{
  int count = 1;
  for (int i = 0; i <= n; ++i)
    count += i;
  return count;
}
