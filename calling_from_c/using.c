#include "wrapper.h"

int main() {
  int virtual = 2;
  void *ptr = MyClass_construct("hello");
  MyClass_print(ptr);
  MyClass_concat(ptr, " world");
  MyClass_print(ptr);
  MyClass_destroy(ptr);
}
