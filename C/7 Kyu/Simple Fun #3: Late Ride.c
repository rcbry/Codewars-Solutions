int lateRide(int n)
{
  int h = n/60; // hours
  int m = n%60; // minutes
  int x = (h/10)+(h%10)+(m/10)+(m%10); // sum of digits
  return x; // total
}
