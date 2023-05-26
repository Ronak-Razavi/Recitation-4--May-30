#include <stdio.h>

union MyUnion {
    int x;
    float y;
};

int main() {
    union MyUnion u;
    u.x = 10;

    int* ptrX = &u.x;
    float* ptrY = &u.y;

    printf("Address of X: %p\n", (void*)ptrX);
    printf("Address of Y: %p\n", (void*)ptrY);

    return 0;
}
