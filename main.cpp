#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {

    int *ptr; //указатель ссылается на случайную невыделенную область в памяти
    *ptr = 1; //поэтому здесь программа завершится с каким-нибудь кодом выхода
    // Process finished with exit code -1073741819 (0xC0000005)

    printf("*ptr_arg = %d\n", *ptr);

    return 0;
}
