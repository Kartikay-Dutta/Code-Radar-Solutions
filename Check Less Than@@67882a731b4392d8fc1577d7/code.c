#include <stdio.h>

int main() {
    int num1, num2;

    // Read two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Check if the first number is less than the second
    if (num1 < num2) {
        printf("True\n");
    }
     else {
        printf("False\n");
    }

    return 0;
}