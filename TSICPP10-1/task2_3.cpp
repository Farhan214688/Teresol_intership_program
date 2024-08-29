/*

Task 2.3: Write a program that illustrates the application of catch(...) handle


*/

#include <iostream>
using namespace std;

int main()
{

	try {


		throw 10;
	}


	catch (char* excp) {
		cout << "Caught " << excp;
	}

	// catch all
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}
