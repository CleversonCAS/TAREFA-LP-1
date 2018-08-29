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
	void unique( int *first , int *last )
	{	
		int a = std::distance(first,last);
		int *vet = new int[a];
		int *k=first;
		int j=0;
		for(auto i=first ; i!=last ; j++,i++)
		{
			vet[j]=*i;
		}
		int aa=0;
		int flag;
		int m=0;
		for(auto i=first ; i!=last ; aa++,i++)
		{
			for(auto j=0 ; j<aa ; j++)
			{
				flag=1;
				if(vet[j]==*i)
				{
					flag=0;
					break;
				}
			}
			if (flag==1)
			{	
				m++;
				vet[m]=*i;
			}
		}

		for(auto i(0) ; i<=m ; i++)
		{
			std::cout<< vet[i] <<" ";
		}
		std::cout<<std::endl;
	};
	int *apartaid(int *first, int *last)
	{
		int c(0);
		for(auto i(first) ; i!=last ; i++)
		{	
			if(*i==1)
			{
				for (auto j=i+1; j!=last ; j++)
				{
					if(*j==0)
					{
						std::swap(*i,*j);
						c++;
						break;
					}				
				}
			}
		}
		return first+c;
	}
	void paticao(int *first , int *last , int *pivot)
	{
	}