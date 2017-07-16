const char* greet(const char *name, const char *owner)
{
  if (name==owner)
    return "Hello boss";
  else
    return "Hello guest";
}
