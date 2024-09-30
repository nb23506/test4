#include <stdio.h>

// Deklarasi fungsi yang akan diuji
int get_larger_number(int x, int y) {
    if (x > y) {
        return x;
    } else if (y > x) {
        return y;
    } else {
        return -1; // Jika sama
    }
}

// Fungsi grading untuk menguji program
void grading() {
    int passed = 0;
    int total_tests = 5;
    
    // Kasus uji 1
    int result = get_larger_number(10, 20);
    if (result == 20) {
        printf("Test 1 passed.\n");
        passed++;
    } else {
        printf("Test 1 failed. Expected 20, got %d\n", result);
    }

    // Kasus uji 2
    result = get_larger_number(30, 15);
    if (result == 30) {
        printf("Test 2 passed.\n");
        passed++;
    } else {
        printf("Test 2 failed. Expected 30, got %d\n", result);
    }

    // Kasus uji 3
    result = get_larger_number(7, 7);
    if (result == -1) {
        printf("Test 3 passed.\n");
        passed++;
    } else {
        printf("Test 3 failed. Expected -1, got %d\n", result);
    }

    // Kasus uji 4
    result = get_larger_number(-5, 5);
    if (result == 5) {
        printf("Test 4 passed.\n");
        passed++;
    } else {
        printf("Test 4 failed. Expected 5, got %d\n", result);
    }

    // Kasus uji 5
    result = get_larger_number(0, 0);
    if (result == -1) {
        printf("Test 5 passed.\n");
        passed++;
    } else {
        printf("Test 5 failed. Expected -1, got %d\n", result);
    }

    // Output hasil grading
    printf("\n%d out of %d tests passed.\n", passed, total_tests);
}

// Fungsi main tetap dibutuhkan, namun tidak perlu eksplisit diubah
int main() {
    grading(); // Jalankan fungsi grading secara otomatis
    return 0;
}
