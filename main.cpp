#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {

    int arg = 777;
    int *ptr_arg;
    char *ptr;

    void *p; //позволяет присваивать без каста

    ptr_arg = &arg;
    ptr = (char *)ptr_arg;

    p = ptr_arg;
    ptr_arg = p; //в 14 - ошибка, в 99 - можно присвоить void to int*
    *p = 10; // нельзя использовать войд поинтер для работы с ячейками памяти

    *ptr = 1;

    printf("*ptr_arg = %d, arg = %d\n", *ptr_arg, arg); //769

    return 0;
}
