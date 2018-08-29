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
	int P[]={1,3,5,5,3,1,6,7,7,8,1};
	int Z[]={1,0,0,1,0,1,0,1,0,0,0,1,1,1,0,0};
	printB();
	cout<<"		VETOR ORIGINAL		"<<endl;
	printv(begin(A),end(A));
	printB();
	cout<<"		NEGATIVO 	1"<<endl;
	negativo(begin(A),end(A));
	printv(begin(A),end(A));
	printB();
	cout<<"		REVERSE 	3"<<endl;
	reverse(begin(A),end(A));
	printv(begin(A),end(A));	
	printB();
	cout<<"     MULTI * N, n(-2)	4"<<endl;
	multi(begin(A),end(A),-2);
	printv(begin(A),end(A));
	printB();
	cout<<"		MINIMO		2"<<endl;
	cout<<*mini(begin(A),end(A))<<endl;
	printB();
	cout<<"		VETOR ATUAL		"<<endl;
	printB();
	cout<<"		PRODUTO DOS VETORES		5\n"<<multvetor(begin(A), end(A), begin(D))<<endl;
	printB();
	cout<<"		COMPACT		6"<<endl;
	printv(begin(Q),end(Q));
	auto last_compact=*compact(begin(Q),end(Q));
	for ( auto i ( begin ( Q ) ) ; *i != last_compact ; ++i )//deve imprimir apenas os elementos positivos
	{
		cout << * i << " ";
	}
	cout << std :: endl;
	printB();
	cout<<"			COPY	 B>C	7\n";
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
	printB();
	cout<<"		UNIQUE 		"<<endl;
	cout<<"		VETOR COM REPETIDOS		"<<endl;
	printv(begin(P),end(P));
	cout<<"		VETOR SEM REPETIDOS 		"<<endl;
	unique(begin(P) ,end(P) );
	printB();
	cout<<"		APARTAID 		"<<endl;
	cout<<"		VETOR 0,1		"<<endl;
	printv(begin(Z),end(Z));
	cout<<"		VETOR 0 		"<<endl;
	auto apa=apartaid(begin(Z), end(Z));
	for ( auto i ( begin (Z) ) ; i !=apa ; i++ )//Deve imprimir os elementos de B
	{
		cout << * i << " ";
	};
	cout << std :: endl ;


	return 0;
}
