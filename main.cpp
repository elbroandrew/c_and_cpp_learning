#include <iostream>

#define SIZE_BUFFER     5

int buffer[SIZE_BUFFER] = {1, 100, 5}; //чаще всего лучше вынести инициализацию за ф-ию,
//т.к. копирование элементов происходит, и если много их >1000, то это сильно скажется на скорости работы программы.


int main() {
    // simple iterator like in python, it is a pointer
    int *p;
    for(p = &buffer[0]; p <= &buffer[4]; p++){
        printf("%d\n", *p);
    }


    return 0;
}
