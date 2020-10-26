#include <iostream>

int main()
{
	int average=0, m=0, n=0;
	std::cin>>m>>n;
	if(m%2!=0) m+=1;
	if(n%2!=0) n-=1;
	std::cout<<(m+n)/2;
	
	return 0;
}
