double arithmetic(double a, double b, char* op)
{
  switch(op[0]) // This is faster than an usual if-else, the function don't need to check all characters
  {
    case 'a': return a+b;break; // add
    case 's': return a-b;break; // subtract
    case 'm': return a*b;break; // multiply
    case 'd': return a/b;break; // divide
  }
}
