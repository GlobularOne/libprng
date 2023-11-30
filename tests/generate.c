/*
This test ensures API comptability between releases
*/
#include "prng.h"

int
main ()
{
  prng_seed (0x12345);
  prng_generate ();
  return 0;
}
