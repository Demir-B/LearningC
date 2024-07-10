#include <stdio.h>

int main () {

    int target = 9;
    int nums[] = {2, 7, 11, 15};
    int lennums = sizeof(nums[0]);
    int placeholder;
    int i;
    int j;
    int correctpos1;
    int correctpos2;

    for (i = 0; i < lennums; i++) {
        for (j = i; j < lennums; j++) {
            placeholder = nums[i] + nums[j];
            if (placeholder == target) {
                correctpos1 = i;
                correctpos2 = j;
            }
        }
    }


    printf("[%d,", nums[correctpos1]);
    printf("%d]", nums[correctpos2]);
    printf("\nBecause nums[%d] + nums[", correctpos1);
    printf("%d] == ", correctpos2);
    printf("%d", target);

    return 0;
}