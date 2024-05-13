#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
  printf("%p", p);
}

int main()
{
  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%p", p); // 11
  return 0;
}