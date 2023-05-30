#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);

    int length = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        length++;
    }

    printf("Name: %s\n", name);
    printf("Length of the name: %d\n", length);

    printf("Array representation of the name:\n");
    for (int i = 0; i < length; i++) {
        printf("%c ", name[i]);
    }
    printf("\n");

    printf("Location of each element in the array:\n");
    for (int i = 0; i < length; i++) {
        printf("%c: %p\n", name[i], &name[i]);
    }

    return 0;
}
