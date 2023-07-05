#include <iostream>
#include <thread>

using namespace std;

#define SIZE_BUFFER     5

int buffer[SIZE_BUFFER] = {1, 100, 5}; //чаще всего лучше вынести инициализацию за ф-ию,
//т.к. копирование элементов происходит, и если много их >1000, то это сильно скажется на скорости работы программы.

void function_1(){
    cout << "run from thread 1" << endl;
}

int main() {

    thread t1(function_1); // t1 starts running
    //t1.join(); // main thread waits for t1
    t1.detach(); //behaves like a daemon process




    return 0;
}
