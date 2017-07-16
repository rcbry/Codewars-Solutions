int fib(int n)
{
  int t=f(n);
  return t;
}

int f (int n) // recursive function
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return(f(n-1)+f(n-2));
}
