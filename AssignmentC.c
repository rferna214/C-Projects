// include pre-processor directive
#include "./headers/AssignmentC.h"
/* write function for question 1 */

void genPower (int n, int p) {
    int i;
    int ans = 1;
    
    printf("Power - Normal Variables\n");

    // set up for loop
    // use macro expression as condition of  for loop
    for(i = p; condition(i); i--){
        ans = ans * n;
    }
    printf("%d taken to the power of %d is % d\n", n,p,ans);

}


/* write function for question 2 */

void genPowerReference (int *n, int *p) {
    int i;
    int ans = 1;
    printf("\nPower - Pointer Variables\n");
    for(i= *p; condition(i); i--){
        ans = ans * *n;
    }
    return ans;
}

