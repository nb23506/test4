#include <stdio.h>

int main() {
    int x, y;

    // Membaca input dari pengguna
    printf("Masukkan dua angka bulat (x dan y): ");
    scanf("%d %d", &x, &y);

    // Menentukan dan mencetak angka yang lebih besar
    if (x > y) {
        printf("Angka yang lebih besar adalah: %d\n", x);
    } else if (y > x) {
        printf("Angka yang lebih besar adalah: %d\n", y);
    } else {
        printf("Kedua angka sama.\n");
    }

    return 0;
}

