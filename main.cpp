#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int array2[2][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };

    int *ptr1;
    int **ptr2;
    int (*ptr3)[5];

    ptr1 = array2; // 1) не работает
    ptr2 = array2; // 2) не работает
    ptr3 = array2; // 3) работает



    return 0;
}
