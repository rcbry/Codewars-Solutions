#include <inttypes.h>

struct clonewars_t
{
    uintmax_t clones;
    uintmax_t solved;
};

struct clonewars_t clonewars(int n)
{
    return (struct clonewars_t)
    {
      .clones = n == 0 ? 1 : (uintmax_t) 1 << n -1,
      .solved = ((uintmax_t) 1 << n + 1) - n - 2
    };
}
