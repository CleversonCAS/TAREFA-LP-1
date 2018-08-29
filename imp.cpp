#include <iostream>
#include <algorithm>
#include <iterator>
#include "fun.h"

	void negativo( int *first , int *last )
	{
		while(first!=last)
		{
			*first++ *=-1;

		}
	};
	void printB()
	{
		std::cout<<"__________________________________________________"<<std::endl;
	};
	void printv(int *first , int *last)
	{
		while(first!=last)
		{
			std::cout<< *first<<" ";
			first++;
		}
		std::cout<<"\n";
	};
	const int *mini( const int *first , const int *last )
	{
		
		const int *min = first;
		while(first!=last)
		{
			if(*first<*min)
			{
				min=first;
			}
			first++;
		}
		return min;
	}
	void reverse(int *first, int *last)
	{
		last--;
		for(  ; first<=last; first++,last--)
		{
			std::swap(*first, *last);
		}
	};
	void multi(int *first, int *last, int n)
	{
		for(;first <= last ; first++)
		{
			*first*=n;
		}
	};
	int multvetor(int *first_a, int *last_a, int *first_b)
	{	
		int soma(0);
		
		for(;first_a < last_a ; first_a++, first_b++)
		{
			soma+=(*first_a) * (*first_b);
		}
		return soma;
	};


	int *compact(int *first, int *last) 
	{	
		auto firstn=first;
		int *w1=first-1;
		int *i;
		int c(0);
		for(int *w2=first ; w2<=last ; w2++)
		{
			if(*w2<=0)
			{
				w1++;
				++c;
				for( i=w1 ; i!=last ; i++)
				{
					if(*i>0)
					{
						std::swap(*w2,*i);
						break;
					}
				}
			}
		}
		while(*firstn>0)
		{
			firstn++;
		}
		return firstn;
	};

	int *copy(const int *firstA,const int *lastA,int *firstB )
	{	
		auto k=std::distance(firstA,lastA);
		auto i(firstA);
		auto j(firstB);
		for( i=firstA,  j=firstB; i !=lastA ; i++,j++)
		{
			*j=*i;
		}

		return firstB+k;//////retornaria o last de B + 1
	};
	int *unique( int *first , int *last )
	{	
		int a = std::distance(first,last);
		int *vet = new int[a];
		auto k=first;
		int m =0;
		for(auto i=first ; i!=last ; i++)
		{
			for(auto j = first; j<=i ; j++)
			{
				if(*j == *i+1)
				{
					break;
				}
				vet[m]=*i+1;
				k++;
				m++;
			}
		}
		for(auto i(first) ; i!=k ; i++)
		{
			//////////////////////////
		}
	};