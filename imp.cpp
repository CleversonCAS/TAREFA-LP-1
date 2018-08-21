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
		for(auto i=first ; i<last ; i++)
		{
			if(*i<*min)
			{
				min=*i;
			}
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
	}
	//int multvetor(int *first_a, int *last_a, int *first_b)
	//{	
	//	int soma(0)
	//	for(;first_a<=last_a ; first_a++, first_b++)
	//	{
	//		soma+=first_a * first_b;
	//	}
	//}/*	
