#include <stdio.h>

int numeral_values(char numeral) {
    switch (numeral) {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
    }
}


int main() {
    char num[15];
    printf("Enter a roman numeral you want to be converted to a integer: ");
    scanf("%s", &num);
    printf("Input = %s\n", num);
    printf("Explanation: ");
     
    int i;
    int result;

    char previous_digit;
    char current_digit;
    char next_digit;

    int previous_digit_value;
    int current_digit_value;
    int next_digit_value;

    int total = 0;

    for (i = 0; i <= 14; i++) {        
        current_digit = num[i];
        result = numeral_values(current_digit);
        
        if (result > 0) {
            // printf("%c", num[i]);
            if (i == 0) {
                next_digit = num[i + 1];
                current_digit_value = numeral_values(current_digit);
                next_digit_value = numeral_values(next_digit);

                if (next_digit_value <= current_digit_value) {
                    total += current_digit_value;
                    printf("%c = %d", current_digit, current_digit_value);
                }
            }

            else if ((i > 0) && (i < 14)) {
                previous_digit = num[i - 1];
                next_digit = num[i + 1];
                previous_digit_value = numeral_values(previous_digit);
                current_digit_value = numeral_values(current_digit);
                next_digit_value = numeral_values(next_digit);

                if (previous_digit_value < current_digit_value) {
                    total += (current_digit_value - previous_digit_value);
                    printf(", %c%c = %d", previous_digit, current_digit, (current_digit_value - previous_digit_value));
                }

                else if ((previous_digit_value >= current_digit_value) && (next_digit_value <= current_digit_value)) {
                    total += current_digit_value;
                    printf(", %c = %d", current_digit, current_digit_value);
                }
            }

            else if (i == 14) {
                previous_digit = num[i - 1];
                previous_digit_value = numeral_values(previous_digit);
                current_digit_value = numeral_values(current_digit);

                if (previous_digit_value < current_digit_value) {
                    total += (current_digit_value - previous_digit_value);
                    printf(", %c%c = %d", previous_digit, current_digit, (current_digit_value - previous_digit_value));
                }

                else if (previous_digit_value >= current_digit_value) {
                    total += current_digit_value;
                    printf(", %c = %d", current_digit, current_digit_value);
                }
            }
        }
    }

    printf(".\nResult = %d", total);
    return 0;
}