
#include <iostream>

using namespace std;

void fun() {
    static int i = 10;
    i++;
    cout << i << endl;
}

int main() {
    fun();      // Output = 11
    fun();      // Output = 12
    fun();      // Output = 13
}
