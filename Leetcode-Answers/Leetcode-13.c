#include <stdio.h>

int isNum(char numeral) {
    switch (numeral) {
        case 'I':
            return 1;
            break;
        case 'V':
            return 1;
            break;
        case 'X':
            return 1;
            break;
        case 'L':
            return 1;
            break;
        case 'C':
            return 1;
            break;
        case 'D':
            return 1;
            break;
        case 'M':
            return 1;
            break;
        default:
            return 0;
    }
}

int main() {
    char num[15];
    printf("Enter a roman numeral you want to be converted to a integer: ");
    scanf("%s", &num);
     
    int i;
    int result;

    char previous_digit;
    char current_digit;
    char next_digit;



    for (i = 0; i <= 14; i++) {
        // printf("%d ", i);
        
        current_digit = num[i];
        result = isNum(current_digit);
        
        if (result) {
            result = isModified(current_digit, next_digit);

            // IMPLEMENT A DICTIONARY OR TWO ARRAYS TO CHECK 
            // WHAT NUMERAL HAS A HIGHER PRECEDENCE

        }
    }

    return 0;
}