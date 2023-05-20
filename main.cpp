#include <iostream>

#define SIZE_BUFFER     10
int main() {

    char buffer[SIZE_BUFFER];
    size_t b = sizeof(buffer);
    printf("%zu", b); //1 byte x 10 = 10; zu - is for 'size_t' type.

    return 0;
}
