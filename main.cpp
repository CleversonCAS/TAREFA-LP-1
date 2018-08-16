#include <iostream>
#include <iterator>
#include "fun.h"
using namespace std;

int main()
{
	int A[]={1,2,3,4,5,-6,-7,-8,-9,-10};
	negativo(begin(A),end(A));
	printv(begin(A),end(A));

	return 0;
}