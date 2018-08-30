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
	int W[]={-5,7,10,7,8,9,1,7,-2,3};
	int J[]={1,2,3,4,5,6,7,8,9,10};
	int K[]={1,1,1,1,1,1,1,1,1,1};
	printB();
	cout<<"		VETOR ORIGINAL	(utilizado até \"minimo\""")	"<<endl;
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
	printB();
	printB();

	cout<<"		PRODUTO DOS VETORES		\nvetor(1):";
	printv(begin(K),end(K));
	cout<<"\nvetor(2):";
	printv(begin(J),end(J));
	cout<<"\nProduto:"<<multvetor(begin(K), end(K), begin(J))<<endl;
	printB();

	cout<<"		COMPACT		\nVetor com negativos: ";
	printv(begin(Q),end(Q));
	cout<<endl;
	auto last_compact=*compact(begin(Q),end(Q));
	cout<<"Vetor sem negativos: ";
	for ( auto i ( begin ( Q ) ) ; *i != last_compact ; ++i )//deve imprimir apenas os elementos positivos
	{
		cout << * i << " ";
	}
	cout<<"\n";
	printB();

	cout<<"			COPY	 A->B	\n";
	cout<<"Vetor A: ";
	printv(begin(B),end(B));cout<<endl;
	cout<<"Vetor B: ";
	printv(begin(C),end(C));cout<<endl;
	auto copyC= copy(begin(B),end(B),begin(C));
	cout<<"NOVO B: ";
	for ( auto i ( begin (C) ) ; i !=copyC ; ++i )//Deve imprimir os elementos de B
	{
		cout << * i << " ";
	};
	cout << std :: endl ;
	printB();

	cout<<"		UNIQUE 		"<<endl;
	cout<<"Vetor com repetidos: ";
	printv(begin(P),end(P));cout<<endl;
	cout<<"Vetor sem repetidos: ";
	unique(begin(P) ,end(P) );
	printB();

	cout<<"		APARTAID 		"<<endl;
	cout<<"        Vetor com 0 e 1: ";
	printv(begin(Z),end(Z));cout<<endl;
	cout<<"Novo vetor com apenas 0: ";
	auto apa=apartaid(begin(Z), end(Z));
	for ( auto i ( begin (Z) ) ; i !=apa ; i++ )//Deve imprimir os elementos de B
	{
		cout << * i << " ";
	};
	cout << std :: endl;
	printB();
	cout<<"			PARTIÇÃO		"<<endl;
	cout<<"                     Vetor embaralhado: ";printv(begin(W),end(W));cout<<endl;
	particao(begin(W),end(W),begin(W)+5);
	cout<<"Vetor com o 'pivot' na posição correta: ";printv(begin(W),end(W));cout<<endl;

	return 0;
}
