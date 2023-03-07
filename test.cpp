#include <iostream>

#include "source/sort_functions/insert_sort.h"
#include "source/sort_functions/merge_sort.h"
#include "source/display/containers.h"
#include "source/input/standart_type.h"

int main()
{
int N = 4;
float* m= new float[N] {0.3 , 0.1, 0.2, 0.6};
display(m,4);
merge_sort(m,N);
std::cout << std::endl;
display(m,N);
delete[] m;
	
return 0;
	
}