#include <iostream>
using namespace std;

int main() {
    char name[40] = "andrew";
    char *p = name;
    int len = 0;
    while (*p){
        ++len; //increment length variable
        ++p; //move pointer to next position
    }
    cout << len << endl;

    return 0;
}
