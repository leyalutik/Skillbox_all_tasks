#include "containers.h"
void display(float *m, const std::size_t N)
{
	if(N<0)
	{
		std::cout << "Illegal value of N in function display(float *m, size_t N)\n";
	}
	bool first = true;
	std::cout << "{";
	for(size_t i=0; i<N; i++)
		{
			if(!first)
			{
				std::cout << ", ";
			}
			first = false;
			std::cout << *(m+i);
		}
	std::cout << "}";
	std::cout << "\n";
}