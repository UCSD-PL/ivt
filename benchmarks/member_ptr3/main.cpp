#include <iostream>
#include <stdio.h>
#include "classes.h"
#include <assert.h>
#include <string>
#include <stdint.h>
#include <cstdlib>

int main()
{
  VBase* bb   = new VBase();
  VBase* bd   = new Derived();
  Derived* dd = new Derived();

  bd = dd;

  void (VBase::*bFptr)();

  srand (time(NULL));
  if (rand() & 1) {
    bFptr = &VBase::f;
  } else {
    bFptr = &VBase::g;
  }

  void* _ptr = &bFptr;
  void** ptr = (void**) _ptr;

  int64_t* ptr2 = (int64_t*) ptr;
  //printf("%ld, %ld\n", (ptr2[0] - 1) / 2, ptr2[1]);
  ptr2[0] += 8;

  (bd->*bFptr)();


  return 0;
}
