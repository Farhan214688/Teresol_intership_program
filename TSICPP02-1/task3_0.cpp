#include <iostream>
using namespace std;

// var4 is a global variable
int var4 = 0;

void test() 
{
    // var is a static variable
    static int var = 0;
    // var2 is a local variable
    int var2 = 0;

     cout << "static var: " << var << ", local var2: " << var2 << ", global var4: " << var4 << endl;

    // Modify and print variables
    var++;
    var2++;
    var4++;

    cout << "static var: " << var << ", local var2: " << var2 << ", global var4: " << var4 << endl;
}

int main() {
    // var3 is a local variable
    int var3 = 0;

    // Modify 
    var3++;
    var4++;
    cout << "Inside main() - local var3: " << var3 << ", global var4: " << var4 << endl;

    // Call test() function
    test();
    test();

    // Print the global variable after function calls
    cout << "After test() calls - global var4: " << var4 << endl;

    return 0;
}
