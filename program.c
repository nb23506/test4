#include <stdio.h>

int main() {
    int x, y;

    // read the input
    printf("Enter two integers (x and y): ");
    scanf("%d %d", &x, &y);

    // Determine and print the larger number
    if (x > y) {
        printf("The larger number is: %d\n", x);
    } else if (y > x) {
        printf("The larger number is: %d\n", y);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
