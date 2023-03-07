#include "merge_sort.h"

#include<iostream>


void copy(float* m, const int N, float* result)
{
	for(size_t i=0; i<N; ++i)
		{
			*(result+i) = *(m+i);
		}
}



void merge(float* left, const int Nl, float* right, const int Nr, float* result)
{
	int i=0;
	int l=0;
	int r=0;
	while(i < (Nl+Nr))
	{
				if (l<Nl && r < Nr )
				{
					if(*(left+l) > *(right+r))
					{
						*(result+i) = *(right+r);
						++r;
						++i;
					}
					else
					{
						*(result+i) = *(left+l);
						++l;
						++i;
					}
				}
		else if(l<Nl)
		{
			*(result+i) = *(left+l);
						++l;
						++i;
		}
		else if(r<Nr)
		{
			*(result+i) = *(right+r);
			++r;
			++i;
		}
	}
}


void merge_sort(float* m , const int N)
{
	if(N<0) 
	{
		std::cout << "Illegal number of elements\n" << "m[0] = " << *m << "\n N = " << N << "\n";
		return;
	}
	if(N == 0 || N == 1)
	{
		return;
	}
	if(N == 2)
	{
		if(*(m+0) > *(m+1))
		{
			float temp = *m;
			*m = *(m+1);
			*(m+1) = temp;
		}
		return;
	}
	int32_t mid = N/2;
	float left[mid];
	copy (m,mid,left);
	float right[N-mid];
	copy(m+mid,N-mid,right);
	merge_sort(left,mid);
	merge_sort(right, N-mid);
	merge(left,mid,right,N-mid, m);
	
	return;
}
