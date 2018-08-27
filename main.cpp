#include <iostream>
#include <iterator>
#include "fun.h"
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int a;
	int A[]={1,2,3,4,5,-6,-7,-8,-9,-10};
	int B[]={1,2,3,4,5,6,7,8,9,10};
	int C[]={0,0,0,0,0,0,0,0,0,0};
	int D[]={1,-1,0,3,-1,1,2,1,10,-1};
	int Q[]={-2,-8,2,7,-3,10,1,0,-3,7};
	printB();
	cout<<"		VETOR ORIGINAL		"<<endl;
	printv(begin(A),end(A));
	printB();
	cout<<"		NEGATIVO 	"<<endl;
	negativo(begin(A),end(A));
	printv(begin(A),end(A));
	printB();
	cout<<"		REVERSE 	"<<endl;
	reverse(begin(A),end(A));
	printv(begin(A),end(A));	
	printB();
	cout<<"     MULTI * N, n(-2)	"<<endl;
	multi(begin(A),end(A),-2);
	printv(begin(A),end(A));
	printB();
	cout<<"		MINIMO		"<<endl;
	cout<<*mini(begin(A),end(A))<<endl;
	printB();
	cout<<"		VETOR ATUAL		"<<endl;
	printB();
	cout<<"		PRODUTO DOS VETORES		\n"<<multvetor(begin(A), end(A), begin(D))<<endl;
	printB();
	cout<<"		COMPACT		"<<endl;
	printv(begin(Q),end(Q));
	auto last_compact=*compact(begin(Q),end(Q));
	for ( auto i ( begin ( Q ) ) ; *i != last_compact ; ++i )//deve imprimir apenas os elementos positivos
	{
		cout << * i << " ";
	}
	cout << std :: endl;
	printB();
	cout<<"			COPY	 B>C	\n";
	cout<<"B"<<endl;
	printv(begin(B),end(B));
	cout<<"C"<<endl;
	printv(begin(C),end(C));
	auto copyC= copy(begin(B),end(B),begin(C));
	cout<<"NOVO C\n";
	for ( auto i ( begin (C) ) ; i !=copyC ; ++i )//Deve imprimir os elementos de B
	{
		cout << * i << " ";
	};
	cout << std :: endl ;



	return 0;
}
