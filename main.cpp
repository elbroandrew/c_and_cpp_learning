#include <iostream>

#define SIZE_BUFFER     5
int main() {

    int buffer[SIZE_BUFFER] = {1,2,3}; //а остальные сами станут 0 т.е. {1,2,3,0,0} - это инициализация, знак равно тут инициализирует, не присваивает.
    
    size_t b = sizeof(buffer);
    size_t len = sizeof(buffer) / sizeof(int);
    printf("%zu", len);

    return 0;
}
