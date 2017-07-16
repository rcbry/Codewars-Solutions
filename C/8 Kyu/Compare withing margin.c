int close_compare(int a, int b, int margin)
{
  if (margin!=0)
  {
    if (b>a)
    {
      if (b-a<=margin)
        return 0;
    }
    else
      if (a-b<=margin)
        return 0;
  }
  if (a==b)
    return 0;
  if (a<b)
    return -1;
  if (a>b)
    return 1;
}
