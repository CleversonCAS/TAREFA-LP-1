#ifndef FUN_H
#define FUN_H
	//1
	void negativo( int *first , int *last );//nega os elementos do vetor										##funfa
	//
	void printv(int *first , int *last);//imprime todo o vetor	##funfa
	void printB();												
	//2
	const int *mini( const int *first , const int *last );//retorna um ponteiro para a posição do menor elemento##funfa
	//3
	void reverse(int *first, int *last);//inverte o vetor 														##funfa
	//4
	void multi(int *first, int *last, int n);//multiplica os elementos do vetor por n 							##funfa
	//5
	int multvetor(int *first_a, int *last_a, int *first_b);//multiplica elementos dos dois vetores e os soma	##funfa???????
	//6
	int *compact(int *first, int *last);//joga os <=0 pra direita												##FUNFA
	//7
	int *copy(const int *firstA,const int *lastA,int *firstB );//copia os elementos de um vetor pro outro       ##funfa
	//8
	void unique( int *first , int *last );//cancela todos os elementos repetidos                                ##EM PROCESSO
	//9
	int *apartaid(int *first, int *last);
	//10
	void paticao(int *first , int *last , int *pivot);

	



#endif