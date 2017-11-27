#include "B.h"
#include <iostream>
using namespace std;

#include "A.h"

void B::g()
{
	cout << "B.g()" << endl;
	cout << "Calling: ";
	A().f();
}