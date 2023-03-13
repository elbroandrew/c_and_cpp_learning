#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {

    int array2[2][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} }; //на стеке так в Си

    int *m = new int[3]; // динамический массив в куче С++
    delete [] m;
    //оператор new или new [] скрывает malloc и free

    //то же самое, но на стеке
    int n[3] = {1,2,3}; // dereferencing *n

    //то же самое, что в строках 10-11, но в куче
    {
        int *p = (int *) malloc(sizeof(int));
        //code
        free(p);
    }




    return 0;
}
