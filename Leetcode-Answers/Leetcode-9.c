#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

        if (xstr == xstrinv) {
            printf("The number is a palidrome number.");
        }

        else {
            printf("The number is not a palidrome number.");
        }
    
    }

    /*
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