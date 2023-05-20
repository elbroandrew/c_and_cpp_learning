#include <iostream>

#define SIZE_BUFFER     5

int buffer[SIZE_BUFFER] = {1, 100, 5}; //чаще всего лучше вынести инициализацию за ф-ию,
//т.к. копирование элементов происходит, и если много их >1000, то это сильно скажется на скорости работы программы.


int main() {

    size_t len = sizeof(buffer) / sizeof(int);
    for(int i = 0; i < len; ++i){
        printf("%d, ", buffer[i]);
    }

    return 0;
}
