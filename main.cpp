#include <iostream>

using namespace std;

int main() {

    int g = 476789;
    char *ptr = (char *)&g;

    for(int i = 0; i < sizeof(int); ++i){
        printf("%d\n", *++ptr); //++ptr - прибавил и присвоил, а ptr++ прибавил, а значение не присвоил.
    }
    //70
    //7
    //0
    //3

    return 0;
}
