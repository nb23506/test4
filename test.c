#include <stdio.h>
#include <stdlib.h>

// Deklarasi fungsi dari program.c
int larger_number(int x, int y);

void run_tests() {
    // Test case 1: x = 3, y = 5
    printf("Test 1: ");
    int x = 3, y = 5;
    int result = larger_number(x, y);
    if (result == 5) {
        printf("Passed!\n");
    } else {
        printf("Failed! Expected: 5, Got: %d\n", result);
    }

    // Test case 2: x = 10, y = 7
    printf("Test 2: ");
    x = 10; y = 7;
    result = larger_number(x, y);
    if (result == 10) {
        printf("Passed!\n");
    } else {
        printf("Failed! Expected: 10, Got: %d\n", result);
    }

    // Test case 3: x = 4, y = 4
    printf("Test 3: ");
    x = 4; y = 4;
    result = larger_number(x, y);
    if (result == -1) {
        printf("Passed! Both numbers are equal: %d\n", x);
    } else {
        printf("Failed! Expected: Both numbers are equal: %d, Got: %d\n", x, result);
    }
}

int main() {
    run_tests();
    return 0;
}
