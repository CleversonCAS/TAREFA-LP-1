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
	{	auto a=first;
		int c(0);
		while(a!=last)
		{
			if(*a<=0)
			{	c++;
				for(int  *i(a);i!=last;i++)
				{
					if (*i>0)
					{
						std::swap(*i,*a);
						break;
					}
				}
			}
			a++;
		}
		return last-c;///////////////////c=5, deveria retornar last-5, feito manualmente funciona
	};

	int *copy(const int *firstA,const int *lastA,int *firstB )
	{	
		auto k=std::distance(firstA,lastA);
		auto i(firstA);
		auto j(firstB);
		for( i=firstA,  j=firstB; i !=lastA ; i++,j++)
		{
			*firstB=*firstA;
		}

		return firstB+k+1;//////retornaria o last de B + 1
	};
	int *unique( int *first , int *last )
	{
		auto fi=first;
		for(auto i(first) ; i!=last ; i++)
		{
			for(auto j(i+1) ; j!=last ;j++)
			{
				if(*i==*j)									
				{										
					*j=0;						//elementos repetidos são zerados
				}
			}
		}
		
		//return laast;                            	
	};