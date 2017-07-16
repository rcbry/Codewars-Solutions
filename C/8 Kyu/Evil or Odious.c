const char *evil(int value)
{
  int count=0;
  
  while(value!=0)
  {
    value = value&(value-1);
    count++;
  }

  if(count % 2 == 0)
    return "It's Evil!";  
  else
    return "It's Odious!";
}
