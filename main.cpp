#include <iostream>

using namespace std;

int main() {

    short g = 4, d = 1;
    short *ptr = &g;
    short *p = &d;

    printf("ptr = %u, p = %u\n", ptr, p);

    int res = ptr - p; // (addr2 - addr1) / sizeof(short) = res;
    //(4095735914 - 4095735912) / 2 = 2 / 2 = 1

    printf("res = %d\n", res);


    return 0;
}
