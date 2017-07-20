#include <math.h>

long long maxRot(long long n)
{
  long long max = n;
  for (int dig = (int)log10l(n) + 1; dig > 0; dig--) 
  {
    long long p10 = (long long)powl(10,dig);  
    long long l = n % p10;                   
    long long u = n - l;                   
        
    p10 /= 10;     
         
    long long msd = (l / p10) % 10;    
    l %= p10;                        
    l *= 10;                        
    l += msd;                         
    n = u + l;                     
    if (n > max) max = n;            
  }
  return max;  
}
