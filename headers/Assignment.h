// include pre-processor directive
#include <stdio.h>

// define MACRO expression to determine if
// the value in the loop counter variable
// is even or odd
#define even(i) (i % 2)

// declare functions
void oddOrEven (int, int);
void oddOrEvenByReference (int *, int *);