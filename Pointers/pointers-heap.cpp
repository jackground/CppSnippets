/**
 * pointer variables on the heap
 *
 * Copyright (c) 2019, Jack Hawley.
 */

#include <iostream>

int main() {
  /* allocates 8 bytes of memory and
  returns pointer to beginning of block of memory */
  char* buffer = new char[8];
  memset(buffer, 0, 8);

  delete[] buffer;
  return 0;
}

