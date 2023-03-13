#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[40];
    strcpy_s(name, sizeof(name), "Andrew");
    cout << sizeof(name) << endl; //40 = 39 + \0
    cout << strlen(name) << endl; //6
    return 0;
}
