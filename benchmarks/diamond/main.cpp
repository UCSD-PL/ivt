#include "classes.h"

#include <stdint.h>
#include <iostream>
#include <cstdio>

int main(int argc, char *argv[])
{
  B* b = new B();
  C* c = new C();
  D* d = new D();

  A* a1 = (A*) b;
  A* a2 = (A*) c;
  A* a3 = (A*) d;

  a1->f();
  a2->f();
  a3->f();

  return 0;
}
