#include <iostream>

using namespace std;

int main() {

    int g = 4;
    int *ptr = &g;

    printf("ptr = %u\n", ptr);

    ptr /= 2; //деление нельзя
    ptr *= 3; // умножение нельзя, только сложение.

    printf("ptr = %u\n", ptr);


    return 0;
}
