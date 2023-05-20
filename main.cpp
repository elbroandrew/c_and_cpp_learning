#include <iostream>

using namespace std;

int main() {

    int g = 4;
    int *ptr = &g;

    printf("ptr = %u\n", ptr);

    ptr++; //сдвигает указатель на следующую порцию данных, определенную типом.
    // в данном случае INT = 4 байтам, значит сдвинется указатель на 4 байта.
    // 2973760516 + 4 = 2973760520

    printf("ptr = %u\n", ptr);

    /* output:
    ptr = 2973760516
    ptr = 2973760520
    */

    return 0;
}
