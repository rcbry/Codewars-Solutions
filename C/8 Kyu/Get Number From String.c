int get_number_from_string(const char *src)
{
  int res = 0;
  while ( *src )
  {
    if ( *src >= '0' && *src <= '9' )
      res = res*10 + (*src - '0');
    src++;
  }
  return res;
}
