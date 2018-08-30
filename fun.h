#ifndef FUN_H
#define FUN_H
	//questão
	//1
	void negativo( int *first , int *last );//nega os elementos do vetor																				
	//2
	const int *mini( const int *first , const int *last );//retorna um ponteiro para a posição do menor elemento
	//3
	void reverse(int *first, int *last);//inverte o vetor 														
	//4
	void multi(int *first, int *last, int n);//multiplica os elementos do vetor por n 							
	//5
	int multvetor(int *first_a, int *last_a, int *first_b);//multiplica elementos dos dois vetores e os soma	
	//6
	int *compact(int *first, int *last);//joga os <=0 pra direita, e retorna um ponteiro apontando para o ultimo positivo+1												
	//7
	int *copy(const int *firstA,const int *lastA,int *firstB );//copia os elementos de um vetor pro outro       
	//8
	void unique( int *first , int *last );//cancela todos os elementos repetidos                                
	//9
	int *apartaid(int *first, int *last);//joga todos os 0 para esquerda, e aponta um vetor para o ultimo 0 (+1)
	//10
	void particao(int *first , int *last , int *pivot);//coloca o elemento apontado no parametro no centro, onde os menores que ele ficam à esquerda e os maiores ficam a direita
	//
	void printv(int *first , int *last);//imprime todo o vetor	
	//
	void printB();//imprime o separador

	



#endif