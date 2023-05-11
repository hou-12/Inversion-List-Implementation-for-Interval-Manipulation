#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include "inversion-list/inversion-list.h"
#include "inversion-list/inversion-list.inc"

int main(void) {
  InversionList set;
  assert(sizeof set == 2 * sizeof(unsigned int) + sizeof(size_t));
  assert(reinterpret_cast<void*>&set.capacity == reinterpret_cast<void*>&set);
  assert(reinterpret_cast<void*>&set.support == reinterpret_cast<void*>&set + sizeof(unsigned int));
  assert(reinterpret_cast<void*>&set.size == reinterpret_cast<void*>&set + 2 * sizeof(unsigned int));
  assert(reinterpret_cast<void*>set.couples == reinterpret_cast<void*>&set + 2 * sizeof(unsigned int) + sizeof(size_t));
  assert(reinterpret_cast<void*>&set.couples[0] == reinterpret_cast<void*>&set + 2 * sizeof(unsigned int) + sizeof(size_t));
  assert(reinterpret_cast<void*>&set.couples[1] == reinterpret_cast<void*>&set + 2 * sizeof(unsigned int) + sizeof(size_t) + sizeof(unsigned int));
  return EXIT_SUCCESS;
}
