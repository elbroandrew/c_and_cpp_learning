#include <iostream>

using namespace std;
#define SIZE_BUFFER     1024
int main() {

    //корректные объявления
    double f[30];
    char buffer[SIZE_BUFFER];
    int marks[12];
    short ar[8 * 5];
    char bytes[sizeof(double)];

    //некорректные объявления
    int n = 5;
    int array[n]; //C++99 можно, в других - по-разному.
    int null_array[0]; //нежелательно


    return 0;
}
