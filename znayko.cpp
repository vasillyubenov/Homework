
#include "pch.h"
#include <iostream>

int main()
{
	int a, b, c, maxsub=0,magic_num=0,min_sub=0;
	std::cin >> a >> b >> c;
	
	for (int i = b; i < 1000; i += b)
	{
		maxsub += b;
	}
	do
	{
		min_sub += c;
	} while (min_sub < 1000);
	magic_num += a + maxsub + min_sub;
	std::cout << magic_num;
}

