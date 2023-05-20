#include <iostream>

#define SIZE_BUFFER     5
int main() {

    int buffer[SIZE_BUFFER]; // можно иниц нулём, лучше вот так ={0}, чем просто ={} .
    buffer = {1,2,3,4,5}; // error, это уже присваивание, так нельзя. Только могу присвоить значение buffer[5] = 244;
    size_t b = sizeof(buffer);
    size_t len = sizeof(buffer) / sizeof(int);
    printf("%zu", len);

    return 0;
}
