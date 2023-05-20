#include <iostream>

using namespace std;

int main() {

    short g = 4, d = 1;
    short *ptr = &g;
    short *p = &d;

    printf("ptr = %u, p = %u\n", ptr, p);

    ptr += p; //error

    printf("ptr = %u\n", ptr);


    return 0;
}
