#include <iostream>
#include <iterator>
#include "fun.h"
using namespace std;

int main()
{
	int a;
	int A[]={1,2,3,4,5,-6,-7,-8,-9,-10};
	int B[]={1,2,3,4,5,6,7,8,9,10};
	int C[]={0,0,0,0,0,0,0,0,0,0};
	int D[]={1,-1,0,1,-1,1,1,1,1,-1};
	cout<<"		VETOR ORIGINAL		"<<endl;
	printv(begin(A),end(A));
	cout<<"		NEGATIVO 	"<<endl;
	negativo(begin(A),end(A));
	printv(begin(A),end(A));
	cout<<"		REVERSE 	"<<endl;
	reverse(begin(A),end(A));
	printv(begin(A),end(A));	
	cout<<"     MULTI * N, n(-2)	"<<endl;
	multi(begin(A),end(A),-2);
	printv(begin(A),end(A));
	cout<<"		MINIMO		"<<endl;
	cout<<*mini(begin(A),end(A))<<endl;
	cout<<"		VETOR ATUAL		"<<endl;

	cout<<"		PRODUTO DOS VETORES		\n"<<multvetor(begin(A), end(A), begin(D))<<endl;
	cout<<"		COMPACT		"<<endl;
	printv(begin(D),end(D));
	compact(begin(D),end(D));
	printv(begin(D),end(D));




	return 0;
}
