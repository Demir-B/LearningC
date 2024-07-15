#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void print_chars () {

    for (int i = 0; i <= 255; i++) {
        printf("%d:%c\n", i, i);
    }

}

float * fixed_vector () {

    float test_array[3] = {1, 2, 3};

    return test_array;
}

int main () {

    // int test;
    // scanf("%d", &test);
    // printf("%c", test);

    // print_chars();

    float * test_array;// = {1, 5, 10};
    
    test_array = malloc(4*4);

    // printf("%f\n", test_array[2]);
    printf("%p\n", test_array);
    printf("%p\n", (uint8_t *)test_array + 1);
    printf("%p\n", test_array + 2);
    printf("%f\n", * (test_array + 1));
    printf("%f\n", * (float *)((uint8_t *)test_array + 4));
    printf("%p\n", &test_array);

    return 0;
}