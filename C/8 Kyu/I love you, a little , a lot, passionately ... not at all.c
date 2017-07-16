#include <stddef.h>

const char* how_much_i_love_you(int nb_petals) {
  const char * sentences[] = {
                              "not at all"   ,
                              "I love you"   ,
                              "a little"     ,
                              "a lot"        ,
                              "passionately" ,
                              "madly"
                              };
  return sentences[nb_petals%6];
}
