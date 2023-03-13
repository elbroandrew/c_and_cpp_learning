#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[40];
    strcpy_s(name, sizeof(name), "Andrew"); //use this safe strcopy func because of safety (avoid any garbage)
    cout << sizeof(name) << endl; //40 = 39 + \0
    cout << strlen(name) << endl; //6
    return 0;
}
