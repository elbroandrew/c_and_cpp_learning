#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {

    int arg = 777;
    int *ptr_arg;
    char *ptr;

    ptr_arg = &arg;
    ptr = (char *)ptr_arg;

    *ptr = 1;

    printf("*ptr_arg = %d, arg = %d\n", *ptr_arg, arg); //769

    return 0;
}
