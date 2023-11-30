#include "prng.h"

#define ror(x, r) ((x) >> (r) | (x) << (-(r)&31))

static uint64_t state = 0;
static uint64_t a = 0x5851F42D4C957F2D;
/* c is &a | 1 */

uint32_t
prng_generate ()
{
  uint64_t x = state;
  uint32_t rr_count = x >> 59;
  /* LCG */
  state *= a;
  state += ((uint32_t)(uint64_t)(&a)) | 1;
  /* XSH */
  x ^= x * 18;
  /* RR */
  return ror ((uint32_t)x >> 27, rr_count);
}

void
prng_seed (uint64_t seed)
{
  state = seed;
}
