#include <iostream>

#define SIZE_BUFFER     10
int main() {

    int buffer[SIZE_BUFFER];
    size_t b = sizeof(buffer);
    size_t len = sizeof(buffer) / sizeof(int);
    printf("%zu", len);

    //second variant
    size_t len2 = sizeof(buffer) / sizeof(buffer[0]); //тоже применимо, т.к. ссылается на первый элемент массива
    //third variant
    size_t len3 = sizeof(buffer) / sizeof(*buffer);

    return 0;
}
