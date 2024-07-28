#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int x;

    printf("Enter a number: \n");
    scanf("%d", &x);

    if (x < 0) {
        printf("The number is not a palidrome number.");
    }

    else {

        int lenx = floor(log10(abs(x))) + 1;
        char xstr[lenx];
        sprintf(xstr, "%d", x);
        char xstrinv[lenx];

        int i;
        for (i = 0; i < lenx; i++) {
            xstrinv[i] = xstr[lenx - (i + 1)];
        }

        // printf("%s\n", xstr);
        // printf("%s\n", xstrinv);

        if (strcmp(xstr, xstrinv) == 0) {
            printf("The number is a palidrome number.");
        }

        else {
            printf("The number is not a palidrome number.");
        }
    
    }

    /*
    28/07/2024
    I managed to solve the problem using strcmp() function.
    I could probably write this using nested loops to compare each
    digit in the number x and its inverse but this function is most
    likely more efficient than my planned approach. 

    15/07/2024
    An attempt at solving the problem without the use of strings.
    If I get each digit and add it to the array arrx then it is
    smooth sailing from there but strings are a much simpler solution.

    int lenx = floor(log10(abs(x))) + 1;
    printf("%d", lenx);

    int arrx[lenx];
    arrx = 
    */

    return 0;
}