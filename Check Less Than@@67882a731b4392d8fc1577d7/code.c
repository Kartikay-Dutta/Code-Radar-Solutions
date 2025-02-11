#include <stdio.h>

int main() {
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
