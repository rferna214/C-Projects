// include pre-processor directive
#include "./headers/Assignment.h"

/* this is the function for question 1 */
void oddOrEven (int start, int stop) {
    // declare loop counter variable
    int i;
    
    printf("Odd Or Even - Normal Variables\n");

    // loop as many times as specified 
    // by the values in start and stop
    for (i = start; i <= stop; i++) {
        // use MACRO expression in if-else to determine if
        // the value in the loop counter variable
        // is even or odd
        if (even(i) == 0){
            // display even message
            printf("%d is even\n", i);
        } else {
            // display odd message
            printf("%d is odd\n", i);
        }
    }
}

/* this is the function for question 2 */
void oddOrEvenByReference (int *start, int *stop) {
    // declare loop counter variable
    int i;
    
    printf("\nOdd Or Even - Pointer Variables\n");

    // loop as many times as specified 
    // by the values in start and stop
    // to access a value in a pointer,
    // must use the star
    for (i = *start; i <= *stop; i++) {
        // use MACRO expression in if-else to determine if
        // the value in the loop counter variable
        // is even or odd
        if (even(i) == 0){
            // display even message
            printf("%d is even\n", i);
        } else {
            // display odd message
            printf("%d is odd\n", i);
        }
    }
}