#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

#define SIZE_BUFFER     5

int buffer[SIZE_BUFFER] = {1, 100, 5};

mutex mu;

void shared_print(string msg, int id){
    lock_guard<mutex> guard(mu); //RAII technique, lock_guard allow mutex not to be blocked if code throws exception between 'lock'/'unlock'
    //mu.lock();
    cout << msg << id << endl;
    //mu.unlock();
}


void function_1(){
    for (int i = 0; i > -100; --i) {
        shared_print(string("From t1: "), i);
    }
}

int main() {

    thread t1(function_1);

    for (int i = 0; i < 100; ++i) {
        shared_print(string("From main: "), i);
    }

    t1.join();
    return 0;
}
