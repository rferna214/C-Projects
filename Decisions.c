// include header file
#include "./headers/Decisions.h"

//write the code for the functions
// defined in the header file

// this function will use the comparison operators,
//and the if, if-else, if-else-if statements
void decisions1(void){
    // declare a variable of type float
    //initialize it using constant defined in header file
    float num = NUM;

    // use if statement
    if (num < 40000.0){
        printf("Num (%.2f) is less than 40000.0\n", num);
    }
}