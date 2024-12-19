#include <stdio.h>

void swap(int* pa, int* pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(void) {
    int a;
    int *pa;
    int b;
    int *pb;

    a = 10;
    b = 20;
    pa = &a;
    pb = &b;

    printf("Test\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d\n", *pa, *pb);
    printf("a = %p, b = %p\n", &a, &b);
    printf("a = %p, b = %p\n", pa, pb);
    *pa = 30;
    printf("a = %d, b = %d\n", a, b);
    swap(&a,&b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}