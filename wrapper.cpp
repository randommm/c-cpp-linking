#include "wrapper.h"
#include "core.hpp"

void *MyClass_construct(const char *cc) {
  std::string ss(cc);
  MyClass *mc_inst = new MyClass(ss);
  return static_cast<void *>(mc_inst);
}

void MyClass_destroy(void *v) {
  MyClass *mc_inst = static_cast<MyClass *>(v);
  delete mc_inst;
}

void MyClass_concat(void *v, const char *cc) {
  MyClass *mc_inst = static_cast<MyClass *>(v);
  std::string ss(cc);
  mc_inst->concat(ss);
}

void MyClass_print(void *v) {
  MyClass *mc_inst = static_cast<MyClass *>(v);
  mc_inst->print();
}
