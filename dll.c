void f(unsigned char * c) {
  c[0] += 1;
}

#include <stdint.h>
#define ADLER_PRIME 65521
# checksum, a, and b pointers should refer to buffers of at least nrep + 1 elements
void gen_weak_checksums(uint8_t *large_win, int offs, int nrep, int *checksums, int *a, int *b, int blksize)
{
    uint8_t *new = &large_win[blksize];
    uint8_t *removed = &large_win[0];
    for (int i = 1; i <= nrep; i++,new++,removed++) {
        *a += (*new) - (*removed);
        *b += *a - (*removed) * blksize;
        * checksum ++ = ((*b++) % ADLER_PRIME)<<16 | 
    }
    
}
