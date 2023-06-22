#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* p1 = (char*)a;
    char* p2 = (char*)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }
}

int main() {
    int a = 7, b = 13;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b, sizeof(int));

    printf("After swapping: a = %d, b = %d\n", a, b);

    float x = 3.14, y = 2.71;
    printf("Before swapping: x = %f, y = %f\n", x, y);

    swap(&x, &y, sizeof(float));

    printf("After swapping: x = %f, y = %f\n", x, y);

    return 0;
}
