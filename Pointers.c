// include pre-processor directive
#include "./headers/Pointers.h"

/*
* each variable and function gets stored in memory (in the stack).
* the location in memory to where it's stored is referred to as
* its address. unlike other variables that store values of a
* certain type (like int, float, etc.) a pointer is a variable 
* that stores an address. an integer variable stores an integer value.
* an Integer pointer stores the address of an integer
* variable. we can have pointers to charaters, integers, doubles, etc.
* we can even have pointers to functions. pointers get stored in the heap.
*/


/* this function prints the address of itself*/
void printAddress(void){
    // the %p format specifier used in the format string is
    // a place holder for an address
    printf("The printAddress function is stored at %p\n", printAddress);
}

/* this function returns the address of the global variable i*/
int * getAddress(void){
    //declare pointer to an integer
    // the star is needed when declaring a pointer
    int *ptr;

    // get the address of global variable i and store 
    // it in pointer
    // must use the & when accessing address of a variable
    // the star is not needed when storing an address in a pointer
    ptr = &i;

    // return pointer
    // the star is not needed when using an address in a pointer
    return(ptr);
}

/* this function returns the value stored at the address of the
* global variable i*/
int getDataAtAddress(void){
    //declare pointer to an integer
    // the star is needed when declaring a pointer
    int *ptr;

    // get the address of global variable i and store 
    // it in pointer
    // must use the & when accessing address of a variable
    // the star is not needed when storing an address in a pointer
    ptr = &i;

    // return the value stored at the pointer
    // the star is needed when accessing a value at an address in a pointer
    return(*ptr);
}

/* this function changes the values at the address of the global
 * variable j*/
double storeDataAddress(void){
    //declare pointer to an double
    // the star is needed when declaring a pointer
    double *ptr;

    // get the address of global variable j and store 
    // it in pointer
    // must use the & when accessing address of a variable
    // the star is not needed when storing an address in a pointer
    ptr = &j;

    // change the value in the global varibale j via pointer
    // the start is needed when accessing a value in a pointer
    *ptr += *ptr;

    // return the value stored at the pointer
    // the star is needed when accessing a value at an address in a pointer
    return(*ptr);
}

/* This function returns the size of a double stored in a pointer*/

int getDoubleBytes(void){
    //declare pointer to an double
    // the star is needed when declaring a pointer
    double *ptr;

    // get the address of global variable j and store 
    // it in pointer
    // must use the & when accessing address of a variable
    // the star is not needed when storing an address in a pointer
    ptr = &j;

    // change the value in the global varibale j via pointer
    // the start is needed when accessing a value in a pointer
    *ptr += *ptr;

    // return the size of the value stored at the pointer
    // the star is needed when accessing a value at an address in a pointer
    return(sizeof(*ptr));
}

/* this function returns the size of the pointer to a double*/
int getPointerToDoubleBytes(void){
    //declare pointer to an double
    // the star is needed when declaring a pointer
    double *ptr;

    // get the address of global variable j and store 
    // it in pointer
    // must use the & when accessing address of a variable
    // the star is not needed when storing an address in a pointer
    ptr = &j;

    // change the value in the global varibale j via pointer
    // the start is needed when accessing a value in a pointer
    *ptr += *ptr;

    // return the size of the pointer to a double
    // the star is not needed when an address in a pointer
    return(sizeof(ptr));
}

/* this function prints the address to a pointer to a double that stores null*/
void pointerToNull(void){
    // declare pointer to an double
    // the star is needed when declaring a pointer
    double *ptr;

    // store a value of NULL at the address in the pointer
    // to a double
    // the star is not needed when storing an address in a pointer
    // NULL is an address where no data exists 
    ptr = NULL;

    // get the address of the global static variable j
    // and store it in the pointer
    // must use the & operator when accesing an address of a variable
    // the star is not needed when storing an address in a pointer
    ptr = &j;

    // check if the pointer isn't NULL
    // the star is not neded when accessing the address of a pointer
    if(ptr){
        printf("The pointer is not null %p\n", ptr);
    }else{
        printf("The pointer is null %p\n", ptr);
    }
}
