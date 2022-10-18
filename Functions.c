// include pre processor directive
#include "./headers/Functions.h"

/*
* this function has 3 parameters, all having char*.
* when you have a * in the type of a parameter, it means the parameter is a pointer.
* pointers refer to memory locations instead of holding values.
* char * means the parameters refer to a memory location that would store a collection of characters.
* this is how C deals with strings. there is no string type in C; there is char.* 
* you could also have int *, or float *, or double *.*/

void congratulate1(char *student, char *course, char *programmer){
    printf("%s has done as much %s programming as %s.\n",
        student, course, programmer);
        congratulate2(student, course, programmer);
}

/* this function has 3 parameters and ti also has a local variable*/
void congratulate2(char *student, char *course, char *programmer){
    // declare and initialize a local variable by calling
    //strlen function
    int days = strlen(programmer);
    
    printf("%s has done as much %s programming as %s could fit into %d days.\n",
        student, course, programmer, days);
}

/* this function has 1 parameter and it will return a value
* it will take a celsius temperature, and convert it to
* fahreinheit and return the fahrenheit temperature.*/
float fahrenheitFromCelsius(float celcius){
    // declare a local variable and initialize it using
    // macro expression
    float fahrenheit = fahrenheit(celcius);

    //return value in local variable
    return fahrenheit;
}