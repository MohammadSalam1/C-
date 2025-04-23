#include <iostream>
using namespace std;

int main() {
/*pointer is a variable that stores memory address
 * it doesn't store value like int x = 5
 * it stores memory location
 real life example:
 you are the value
 your home is the memory
 the pointer is the gps to the memory
 */

    int x = 10;
    int* ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer value (address): " << ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;


return 0;

}