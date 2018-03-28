/*
*/
#include <ctype.h> //ctype contains the tolower() function
#include <math.h>
#include <stdio.h>
int main(void) {
    int min = 0; // user defined minimum
    int max = 100; // variables to store range of possible values
    int range = 1; // the range for stopping the program
    char reply;
    int Y, N;
    int avg;
    int i;
    while ((max - min) > range) {
        Y = 0; // event Y is not true.
        N = 0; // event N is not true.
        avg = (max + min) / 2;
        while (!Y && !N) {
            printf("Is your value greater than %d?", avg);
            scanf(" %c", &reply); // note the space before, this tellings scanf
                                  // to ignore the whitespace from the enter
                                  // press
            if (tolower(reply) == 'y') {
                Y = 1;
                N = 0;
                min = avg;
            } else if (tolower(reply) == 'n') {
                N = 1;
                Y = 0;
                max = avg;
            } else {
                printf("Let's try that again.\n");

            }
        }
    }

    i= ((max+min)/2)+1; //applying the ceiling function

    printf("Your number is: %i \n",i);

    return (0);
}
