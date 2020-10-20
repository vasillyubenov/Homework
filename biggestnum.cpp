#include <iostream>

int main()
{
	int first=0, second=0, third=0, br=0;
	std::cin>>first>>second>>third;
	if(first>second)
	{
		if(first>third) 
		{
			if(second>third) std::cout<<first<<second<<third;
			else			 std::cout<<first<<third<<second;
		}
		else    std::cout<<third<<first<<second;
	}
	else if(second>third)
	{
		if(first>third) std::cout<<second<<first<<third;
	    else			 std::cout<<second<<third<<first;
	
	}
	else std::cout<<third<<second<<first;
	
	return 0;
}

