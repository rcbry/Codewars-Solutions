#include <math.h>

int intRac(long long n, long long guess)
{
    int count = 0;
    for (long long prevGuess = 0; abs(guess - prevGuess) >= 1; ++count)
    {
      prevGuess = guess;
      guess = (guess + n / guess) / 2;
    }
    return count;
}
