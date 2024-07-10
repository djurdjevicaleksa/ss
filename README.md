# StringStruct for making C string manipulation easier

An STB library for python-like string abstraction in C.

# Usage

To use this library, put the `ss.h` header inside the wanted directory and then add this to your source code:
```
#define _SS_IMPLEMENT
#include "ss.h"
```
If typed in reverse order, the library won't work.

# Keep in mind

SS doesn't null terminate the string, so instead of using stdlib functions with it,
look around and you will probably find a built-in function you're looking for. If not,
copy it in a char buffer and null terminate it before invoking stdlib functions.

