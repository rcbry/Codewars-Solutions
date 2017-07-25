int calc(const char *source)
{
  int ret = 0;
  while(*source)
  {
    if(*source%10 == 7) ret += 6;
    if(*source/10%10 == 7) ret += 6;
    source++;
  }
  return ret;
}
