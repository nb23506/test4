#include <assert.h>

// Fungsi yang diuji
int get_larger_number(int x, int y) {
    if (x > y) return x;
    else if (y > x) return y;
    return -1;  // Jika x dan y sama
}

void test_get_larger_number() {
    // Test case: x < y
    assert(get_larger_number(10, 20) == 20);

    // Test case: x > y
    assert(get_larger_number(30, 15) == 30);

    // Test case: x == y
    assert(get_larger_number(25, 25) == -1);

    // Test case: x < y, negative numbers
    assert(get_larger_number(-10, 5) == 5);

    // Test case: x > y, negative numbers
    assert(get_larger_number(5, -10) == 5);

    // Test case: x == y, zero
    assert(get_larger_number(0, 0) == -1);

    printf("All tests passed!\n");
}
