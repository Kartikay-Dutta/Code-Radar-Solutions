#include <stdio.h>

int main() {
    char name[20], hobby[20];
    int age;
    scanf("%s %d", &name,&age);
    scanf("%s", &hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}
 