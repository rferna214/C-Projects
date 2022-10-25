// include pre-processor directive
#include <stdio.h>
# define STOP 0
// define MACRO expression to determine if
// the loop should repeat 
#define condition(i) (i > STOP)

// declare functions
void genPower (int, int);

void genPowerReference (int *, int *);

