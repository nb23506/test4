#include <stdio.h>
#include <stdlib.h>

int larger_number(int x, int y) {
    if (x > y) {
        return x;
    } else if (y > x) {
        return y;
    } else {
        return -1; // Menandakan bahwa kedua angka sama
    }
}
