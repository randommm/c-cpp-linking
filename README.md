Example of creating a C interface for a C++ library

# Static library

```bash
c++ wrapper.cpp -c &&
c++ core.cpp -c &&
ar rcs libmy_library.a core.o wrapper.o &&
cd calling_from_c &&
cc using.c -lmy_library -L.. -lstdc++ -static &&
./a.out &&
cd ..
```

# Dynamic library

```bash
c++ wrapper.cpp -c -fPIC &&
c++ core.cpp -c -fPIC &&
c++ -shared core.o wrapper.o -o libmy_library.so &&
cd calling_from_c &&
cc using.c -lmy_library -L.. &&
LD_LIBRARY_PATH=.. ./a.out &&
cd ..
```

# Cleanup

```bash
rm *.o *.so *.a *.out calling_from_c/a.out
```
