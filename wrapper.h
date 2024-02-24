#pragma once

#ifdef __cplusplus
extern "C" {
#endif
void *MyClass_construct(const char *);
void MyClass_destroy(void *);
void MyClass_concat(void *, const char *);
void MyClass_print(void *);
#ifdef __cplusplus
}
#endif
