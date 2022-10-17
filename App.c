#include <stdio.h>
#include <stdlib.h>
// include header file
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"

int main(void){
    //puts("Hello World!!!!");
    // Testing Basic IO functions
    //output();
    //input();
    // Testing Decisions Functionality
    // decisions1();
    // decisions2();
    // decisions3();
    // decisions4();
    // decisions5();
    // decisions6();
    // Testing Loops functionality
    // loops1();
    // loops2();
    // loops3();
    // loops4();
    // loops5();
    // Testing functions functionality
    // declare three charaters arrays and initialize them
    char student[] = "Ron";
    char course[] = "Ruby";
    char programmer[] = "Yukihiro Matsumoto";
    congratulate1(student, course, programmer);
    congratulate2(student, course, programmer);
    printf("%.2f degrees celsius = %.2f degrees fahrenheit\n",
    0.0, fahrenheitFromCelsius(0.0));

    printf("%.2f degrees celsius = %.2f degrees fahrenheit\n",
    100.0, fahrenheitFromCelsius(100.0));

}
