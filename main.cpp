#include <iostream>

using namespace std;

int main() {

    int g = 476789;
    char *ptr = (char *)&g; // &g returns 'int *' and then we cast it to 'char *'

    for(int i = 0; i < sizeof(int); ++i){
        printf("%d\n", *ptr);
        ptr++; //смещаю ptr
        //117 70 7 0
        /*
         т.к. у меня int это 4 байта (char is 1 byte), то число 476789 будет выглядеть так:
         [117][70][7][0]
         117 + 256*70 + 256^2*7
         а, т.к. я пробегаю 'char' указателем по ним, то и печатается каждый байт.

         */
    }

    //эксперимент с short (2 bytes)
    short *p = (short *)&g;
    for(int i = 0; i < sizeof(int) / sizeof(short); ++i){ // делю на sizeof(short) чтоб не выйти за пределы ячеек переменной, т.к. short = 2
        printf("%d\n", *p);
        p++;
        //18037  <- это, потому что [117][70][7][0] берем 2 байта т.е. [117][70], а они в int считались как 117 + 256*7
        //7
    }



    return 0;
}
