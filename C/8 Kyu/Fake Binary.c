void fakeBin(const char *digits, char *buffer)
{
  for (int i=0;digits[i]!=0;++i)
    *buffer++ = digits[i] >= '5' ? '1' : '0';
  *buffer = 0;
}
