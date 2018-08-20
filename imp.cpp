#include <iostream>
#include <algorithm>
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
			*first++;
		}
		std::cout<<"\n";
	};
	/*const int *min( const int *first , const int *last )
	{
		
		auto min=*first;
		for(auto i=first ; i<last ; i++)
		{
			if(*first<min)
			{
				min=*first;
			}
		}
		return min;
	}*/
	void reverse(int *first, int *last)
	{
		last--;
		for(  ; first<=last; first++,last--)
		{
			std::swap(*first, *last);
		}
	};
