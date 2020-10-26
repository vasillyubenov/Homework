#include <iostream>

int main()
{
	int N=0;
	double competitors=1;
	std::cin>>N;
	
	for(int i=0;i<N;i++)
	{
		competitors+=0.5;
		competitors*=2.0;
	}
	std::cout<<competitors;
	
	return 0;
}
